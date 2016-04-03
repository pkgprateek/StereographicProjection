#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#include <spl/gwindow.h>
#include <spl/gevents.h>
#include <spl/gobjects.h>
#include <spl/gmath.h>
#include <spl/ginteractors.h>

int main(void)
{
    FILE* fp = fopen("latt.txt", "r");
    FILE* fc = fopen("long.txt", "r");
    FILE* fq = fopen("Coordinates.txt", "w");
       
    if(fp == NULL || fc == NULL || fq == NULL)
    {
        printf("Error");
        return 1;
    }
    
    GWindow gw = newGWindow(1024, 700);
    
    char cod1[256], cod2[256];
    double lat[4000], lon[4000], x[4000], y[4000], latti, longi, xm, ym;
    
    for(int i = 0; fgets(cod1, sizeof(cod1), fp) != NULL && fgets(cod2, sizeof(cod2), fc) != NULL; i++)
    {
        lat[i] = atof(cod1);
        lon[i] = atof(cod2);
        x[i] = cosDegrees(lat[i] / 2) * cosDegrees(lon[i]) / sinDegrees(lat[i] / 2);
        y[i] = cosDegrees(lat[i] / 2) * sinDegrees(lon[i]) / sinDegrees(lat[i] / 2);
        fprintf(fq, "Lattitude = %lf , Longitude = %lf : : (%lf , %lf)\n", lat[i], lon[i], x[i], y[i]);
        x[i] = x[i] * 100 + 200;
        y[i] = y[i] * 100 - 200;
        GOval dot = newGOval(x[i], y[i], 1.5, 1.5);
        setColor(dot , "BLACK");
        setFilled(dot , true);
        add(gw , dot);
    }
    
    GTextField field1 = newGTextField(10);
    setActionCommand(field1, "input");
    addToRegion(gw, field1, "SOUTH");
    
    GTextField field2 = newGTextField(10);
    setActionCommand(field2, "input");
    addToRegion(gw, field2, "SOUTH");
        
    GButton button = newGButton("Enter");
    setActionCommand(button, "click");
    addToRegion(gw, button, "SOUTH");
    
   
    while(true)
    {
        GActionEvent event = waitForEvent(ACTION_EVENT);
        if(getEventType(event) == WINDOW_CLOSED)
        {
            break;
        }
        if(strcmp(getActionCommand(event), "click") == 0)
            {
                latti = atof(getText(field1));
                longi = atof(getText(field2));
                xm = cosDegrees(latti / 2) * cosDegrees(longi) / sinDegrees(latti / 2);
                ym = cosDegrees(latti / 2) * sinDegrees(longi) / sinDegrees(latti / 2);
                printf("x = %lf : : y = %lf\n", xm, ym);
                xm = xm * 100 + 200;
                ym = ym * 100 - 200;
                GOval dot = newGOval(xm, ym, 3, 3);
                setColor(dot , "RED");
                setFilled(dot , true);
                add(gw , dot);
            }
        
    }
    
    closeGWindow(gw);
    return 0;
}
