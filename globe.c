# 1 "glb.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 157 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "glb.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 352 "/usr/include/features.h" 3 4
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 353 "/usr/include/features.h" 2 3 4
# 374 "/usr/include/features.h" 3 4
# 1 "/usr/include/i386-linux-gnu/sys/cdefs.h" 1 3 4
# 385 "/usr/include/i386-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 386 "/usr/include/i386-linux-gnu/sys/cdefs.h" 2 3 4
# 375 "/usr/include/features.h" 2 3 4
# 398 "/usr/include/features.h" 3 4
# 1 "/usr/include/i386-linux-gnu/gnu/stubs.h" 1 3 4






# 1 "/usr/include/i386-linux-gnu/gnu/stubs-32.h" 1 3 4
# 8 "/usr/include/i386-linux-gnu/gnu/stubs.h" 2 3 4
# 399 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/bin/../lib/clang/3.4/include/stddef.h" 1 3 4
# 34 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef int ptrdiff_t;







typedef unsigned int size_t;
# 65 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef int wchar_t;
# 34 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/i386-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/i386-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/i386-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;







__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
# 121 "/usr/include/i386-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/typesizes.h" 1 3 4
# 122 "/usr/include/i386-linux-gnu/bits/types.h" 2 3 4


__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;

__extension__ typedef int __daddr_t;
__extension__ typedef int __key_t;


__extension__ typedef int __clockid_t;


__extension__ typedef void * __timer_t;


__extension__ typedef long int __blksize_t;




__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;


__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;


__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;


__extension__ typedef int __fsword_t;

__extension__ typedef int __ssize_t;


__extension__ typedef long int __syscall_slong_t;

__extension__ typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;
# 36 "/usr/include/stdio.h" 2 3 4








struct _IO_FILE;



typedef struct _IO_FILE FILE;
# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/bin/../lib/clang/3.4/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/bin/../lib/clang/3.4/include/stdarg.h" 1 3 4
# 30 "/usr/bin/../lib/clang/3.4/include/stdarg.h" 3 4
typedef __builtin_va_list va_list;
# 48 "/usr/bin/../lib/clang/3.4/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 154 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 177 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 245 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 293 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 302 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 338 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 390 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 434 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__)) ;
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__)) ;

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__)) ;
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__)) ;
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__)) ;
# 464 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__)) ;
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 90 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 102 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;
# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/stdio_lim.h" 1 3 4
# 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__)) ;

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__)) ;




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__)) ;
# 195 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void) ;
# 209 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__)) ;
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;
# 237 "/usr/include/stdio.h" 3 4
extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 272 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 306 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__)) ;
# 319 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__)) ;



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__)) ;





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__)) ;


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__)) ;
# 356 "/usr/include/stdio.h" 3 4
extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
# 412 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
# 425 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__)) ;
# 443 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf") ;


extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf") ;

extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__)) ;
# 471 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 494 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 531 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);
# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 573 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);
# 622 "/usr/include/stdio.h" 3 4
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
          ;
# 638 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__deprecated__));
# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;
# 689 "/usr/include/stdio.h" 3 4
extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);
# 749 "/usr/include/stdio.h" 3 4
extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 798 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 826 "/usr/include/stdio.h" 3 4
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__)) ;

extern int feof (FILE *__stream) __attribute__ ((__nothrow__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
# 846 "/usr/include/stdio.h" 3 4
extern void perror (const char *__s);







# 1 "/usr/include/i386-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/i386-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
# 873 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__)) ;
# 913 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__)) ;



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__)) ;
# 2 "glb.c" 2
# 1 "/usr/include/math.h" 1 3 4
# 32 "/usr/include/math.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/huge_val.h" 1 3 4
# 33 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/i386-linux-gnu/bits/huge_valf.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/i386-linux-gnu/bits/huge_vall.h" 1 3 4
# 36 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/i386-linux-gnu/bits/inf.h" 1 3 4
# 39 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/i386-linux-gnu/bits/nan.h" 1 3 4
# 42 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/i386-linux-gnu/bits/mathdef.h" 1 3 4
# 28 "/usr/include/i386-linux-gnu/bits/mathdef.h" 3 4
typedef float float_t;
typedef double double_t;
# 46 "/usr/include/math.h" 2 3 4
# 69 "/usr/include/math.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 1 3 4
# 54 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4
extern double acos (double __x) __attribute__ ((__nothrow__)); extern double __acos (double __x) __attribute__ ((__nothrow__)) ;

extern double asin (double __x) __attribute__ ((__nothrow__)); extern double __asin (double __x) __attribute__ ((__nothrow__)) ;

extern double atan (double __x) __attribute__ ((__nothrow__)); extern double __atan (double __x) __attribute__ ((__nothrow__)) ;

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__)); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__)) ;


extern double cos (double __x) __attribute__ ((__nothrow__)); extern double __cos (double __x) __attribute__ ((__nothrow__)) ;

extern double sin (double __x) __attribute__ ((__nothrow__)); extern double __sin (double __x) __attribute__ ((__nothrow__)) ;

extern double tan (double __x) __attribute__ ((__nothrow__)); extern double __tan (double __x) __attribute__ ((__nothrow__)) ;




extern double cosh (double __x) __attribute__ ((__nothrow__)); extern double __cosh (double __x) __attribute__ ((__nothrow__)) ;

extern double sinh (double __x) __attribute__ ((__nothrow__)); extern double __sinh (double __x) __attribute__ ((__nothrow__)) ;

extern double tanh (double __x) __attribute__ ((__nothrow__)); extern double __tanh (double __x) __attribute__ ((__nothrow__)) ;
# 88 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4
extern double acosh (double __x) __attribute__ ((__nothrow__)); extern double __acosh (double __x) __attribute__ ((__nothrow__)) ;

extern double asinh (double __x) __attribute__ ((__nothrow__)); extern double __asinh (double __x) __attribute__ ((__nothrow__)) ;

extern double atanh (double __x) __attribute__ ((__nothrow__)); extern double __atanh (double __x) __attribute__ ((__nothrow__)) ;







extern double exp (double __x) __attribute__ ((__nothrow__)); extern double __exp (double __x) __attribute__ ((__nothrow__)) ;


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__)) ;


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__)) ;


extern double log (double __x) __attribute__ ((__nothrow__)); extern double __log (double __x) __attribute__ ((__nothrow__)) ;


extern double log10 (double __x) __attribute__ ((__nothrow__)); extern double __log10 (double __x) __attribute__ ((__nothrow__)) ;


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
# 128 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4
extern double expm1 (double __x) __attribute__ ((__nothrow__)); extern double __expm1 (double __x) __attribute__ ((__nothrow__)) ;


extern double log1p (double __x) __attribute__ ((__nothrow__)); extern double __log1p (double __x) __attribute__ ((__nothrow__)) ;


extern double logb (double __x) __attribute__ ((__nothrow__)); extern double __logb (double __x) __attribute__ ((__nothrow__)) ;






extern double exp2 (double __x) __attribute__ ((__nothrow__)); extern double __exp2 (double __x) __attribute__ ((__nothrow__)) ;


extern double log2 (double __x) __attribute__ ((__nothrow__)); extern double __log2 (double __x) __attribute__ ((__nothrow__)) ;
# 153 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4
extern double pow (double __x, double __y) __attribute__ ((__nothrow__)); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__)) ;


extern double sqrt (double __x) __attribute__ ((__nothrow__)); extern double __sqrt (double __x) __attribute__ ((__nothrow__)) ;





extern double hypot (double __x, double __y) __attribute__ ((__nothrow__)); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__)) ;






extern double cbrt (double __x) __attribute__ ((__nothrow__)); extern double __cbrt (double __x) __attribute__ ((__nothrow__)) ;
# 178 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4
extern double ceil (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;


extern double fabs (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;


extern double floor (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__)); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__)) ;




extern int __isinf (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int isinf (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int finite (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__)); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__)) ;



extern double significand (double __x) __attribute__ ((__nothrow__)); extern double __significand (double __x) __attribute__ ((__nothrow__)) ;





extern double copysign (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;






extern double nan (const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;





extern int __isnan (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern int isnan (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double j0 (double) __attribute__ ((__nothrow__)); extern double __j0 (double) __attribute__ ((__nothrow__)) ;
extern double j1 (double) __attribute__ ((__nothrow__)); extern double __j1 (double) __attribute__ ((__nothrow__)) ;
extern double jn (int, double) __attribute__ ((__nothrow__)); extern double __jn (int, double) __attribute__ ((__nothrow__)) ;
extern double y0 (double) __attribute__ ((__nothrow__)); extern double __y0 (double) __attribute__ ((__nothrow__)) ;
extern double y1 (double) __attribute__ ((__nothrow__)); extern double __y1 (double) __attribute__ ((__nothrow__)) ;
extern double yn (int, double) __attribute__ ((__nothrow__)); extern double __yn (int, double) __attribute__ ((__nothrow__)) ;






extern double erf (double) __attribute__ ((__nothrow__)); extern double __erf (double) __attribute__ ((__nothrow__)) ;
extern double erfc (double) __attribute__ ((__nothrow__)); extern double __erfc (double) __attribute__ ((__nothrow__)) ;
extern double lgamma (double) __attribute__ ((__nothrow__)); extern double __lgamma (double) __attribute__ ((__nothrow__)) ;






extern double tgamma (double) __attribute__ ((__nothrow__)); extern double __tgamma (double) __attribute__ ((__nothrow__)) ;





extern double gamma (double) __attribute__ ((__nothrow__)); extern double __gamma (double) __attribute__ ((__nothrow__)) ;






extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__)); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__)) ;







extern double rint (double __x) __attribute__ ((__nothrow__)); extern double __rint (double __x) __attribute__ ((__nothrow__)) ;


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;



extern double remainder (double __x, double __y) __attribute__ ((__nothrow__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__)) ;



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__)) ;



extern int ilogb (double __x) __attribute__ ((__nothrow__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__)) ;




extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__)); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__)) ;



extern double nearbyint (double __x) __attribute__ ((__nothrow__)); extern double __nearbyint (double __x) __attribute__ ((__nothrow__)) ;



extern double round (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;



extern double trunc (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__)); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__)) ;






extern long int lrint (double __x) __attribute__ ((__nothrow__)); extern long int __lrint (double __x) __attribute__ ((__nothrow__)) ;
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__)); extern long long int __llrint (double __x) __attribute__ ((__nothrow__)) ;



extern long int lround (double __x) __attribute__ ((__nothrow__)); extern long int __lround (double __x) __attribute__ ((__nothrow__)) ;
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__)); extern long long int __llround (double __x) __attribute__ ((__nothrow__)) ;



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__)); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__)) ;


extern double fmax (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;



extern int __fpclassify (double __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__)); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__)) ;
# 371 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4
extern double scalb (double __x, double __n) __attribute__ ((__nothrow__)); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__)) ;
# 70 "/usr/include/math.h" 2 3 4
# 88 "/usr/include/math.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 1 3 4
# 54 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4
extern float acosf (float __x) __attribute__ ((__nothrow__)); extern float __acosf (float __x) __attribute__ ((__nothrow__)) ;

extern float asinf (float __x) __attribute__ ((__nothrow__)); extern float __asinf (float __x) __attribute__ ((__nothrow__)) ;

extern float atanf (float __x) __attribute__ ((__nothrow__)); extern float __atanf (float __x) __attribute__ ((__nothrow__)) ;

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__)); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__)) ;


extern float cosf (float __x) __attribute__ ((__nothrow__)); extern float __cosf (float __x) __attribute__ ((__nothrow__)) ;

extern float sinf (float __x) __attribute__ ((__nothrow__)); extern float __sinf (float __x) __attribute__ ((__nothrow__)) ;

extern float tanf (float __x) __attribute__ ((__nothrow__)); extern float __tanf (float __x) __attribute__ ((__nothrow__)) ;




extern float coshf (float __x) __attribute__ ((__nothrow__)); extern float __coshf (float __x) __attribute__ ((__nothrow__)) ;

extern float sinhf (float __x) __attribute__ ((__nothrow__)); extern float __sinhf (float __x) __attribute__ ((__nothrow__)) ;

extern float tanhf (float __x) __attribute__ ((__nothrow__)); extern float __tanhf (float __x) __attribute__ ((__nothrow__)) ;
# 88 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4
extern float acoshf (float __x) __attribute__ ((__nothrow__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__)) ;

extern float asinhf (float __x) __attribute__ ((__nothrow__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__)) ;

extern float atanhf (float __x) __attribute__ ((__nothrow__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__)) ;







extern float expf (float __x) __attribute__ ((__nothrow__)); extern float __expf (float __x) __attribute__ ((__nothrow__)) ;


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__)) ;


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__)) ;


extern float logf (float __x) __attribute__ ((__nothrow__)); extern float __logf (float __x) __attribute__ ((__nothrow__)) ;


extern float log10f (float __x) __attribute__ ((__nothrow__)); extern float __log10f (float __x) __attribute__ ((__nothrow__)) ;


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
# 128 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4
extern float expm1f (float __x) __attribute__ ((__nothrow__)); extern float __expm1f (float __x) __attribute__ ((__nothrow__)) ;


extern float log1pf (float __x) __attribute__ ((__nothrow__)); extern float __log1pf (float __x) __attribute__ ((__nothrow__)) ;


extern float logbf (float __x) __attribute__ ((__nothrow__)); extern float __logbf (float __x) __attribute__ ((__nothrow__)) ;






extern float exp2f (float __x) __attribute__ ((__nothrow__)); extern float __exp2f (float __x) __attribute__ ((__nothrow__)) ;


extern float log2f (float __x) __attribute__ ((__nothrow__)); extern float __log2f (float __x) __attribute__ ((__nothrow__)) ;
# 153 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4
extern float powf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__)) ;


extern float sqrtf (float __x) __attribute__ ((__nothrow__)); extern float __sqrtf (float __x) __attribute__ ((__nothrow__)) ;





extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__)) ;






extern float cbrtf (float __x) __attribute__ ((__nothrow__)); extern float __cbrtf (float __x) __attribute__ ((__nothrow__)) ;
# 178 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4
extern float ceilf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;


extern float fabsf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;


extern float floorf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__)) ;




extern int __isinff (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int isinff (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int finitef (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__)) ;



extern float significandf (float __x) __attribute__ ((__nothrow__)); extern float __significandf (float __x) __attribute__ ((__nothrow__)) ;





extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;






extern float nanf (const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;





extern int __isnanf (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern int isnanf (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float j0f (float) __attribute__ ((__nothrow__)); extern float __j0f (float) __attribute__ ((__nothrow__)) ;
extern float j1f (float) __attribute__ ((__nothrow__)); extern float __j1f (float) __attribute__ ((__nothrow__)) ;
extern float jnf (int, float) __attribute__ ((__nothrow__)); extern float __jnf (int, float) __attribute__ ((__nothrow__)) ;
extern float y0f (float) __attribute__ ((__nothrow__)); extern float __y0f (float) __attribute__ ((__nothrow__)) ;
extern float y1f (float) __attribute__ ((__nothrow__)); extern float __y1f (float) __attribute__ ((__nothrow__)) ;
extern float ynf (int, float) __attribute__ ((__nothrow__)); extern float __ynf (int, float) __attribute__ ((__nothrow__)) ;






extern float erff (float) __attribute__ ((__nothrow__)); extern float __erff (float) __attribute__ ((__nothrow__)) ;
extern float erfcf (float) __attribute__ ((__nothrow__)); extern float __erfcf (float) __attribute__ ((__nothrow__)) ;
extern float lgammaf (float) __attribute__ ((__nothrow__)); extern float __lgammaf (float) __attribute__ ((__nothrow__)) ;






extern float tgammaf (float) __attribute__ ((__nothrow__)); extern float __tgammaf (float) __attribute__ ((__nothrow__)) ;





extern float gammaf (float) __attribute__ ((__nothrow__)); extern float __gammaf (float) __attribute__ ((__nothrow__)) ;






extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__)); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__)) ;







extern float rintf (float __x) __attribute__ ((__nothrow__)); extern float __rintf (float __x) __attribute__ ((__nothrow__)) ;


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;



extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__)) ;



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__)) ;



extern int ilogbf (float __x) __attribute__ ((__nothrow__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__)) ;




extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__)); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__)) ;



extern float nearbyintf (float __x) __attribute__ ((__nothrow__)); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__)) ;



extern float roundf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;



extern float truncf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__)); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__)) ;






extern long int lrintf (float __x) __attribute__ ((__nothrow__)); extern long int __lrintf (float __x) __attribute__ ((__nothrow__)) ;
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__)); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__)) ;



extern long int lroundf (float __x) __attribute__ ((__nothrow__)); extern long int __lroundf (float __x) __attribute__ ((__nothrow__)) ;
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__)); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__)) ;



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__)) ;


extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;



extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__)); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__)) ;
# 371 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4
extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__)); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__)) ;
# 89 "/usr/include/math.h" 2 3 4
# 132 "/usr/include/math.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 1 3 4
# 54 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4
extern long double acosl (long double __x) __attribute__ ((__nothrow__)); extern long double __acosl (long double __x) __attribute__ ((__nothrow__)) ;

extern long double asinl (long double __x) __attribute__ ((__nothrow__)); extern long double __asinl (long double __x) __attribute__ ((__nothrow__)) ;

extern long double atanl (long double __x) __attribute__ ((__nothrow__)); extern long double __atanl (long double __x) __attribute__ ((__nothrow__)) ;

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__)); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__)) ;


extern long double cosl (long double __x) __attribute__ ((__nothrow__)); extern long double __cosl (long double __x) __attribute__ ((__nothrow__)) ;

extern long double sinl (long double __x) __attribute__ ((__nothrow__)); extern long double __sinl (long double __x) __attribute__ ((__nothrow__)) ;

extern long double tanl (long double __x) __attribute__ ((__nothrow__)); extern long double __tanl (long double __x) __attribute__ ((__nothrow__)) ;




extern long double coshl (long double __x) __attribute__ ((__nothrow__)); extern long double __coshl (long double __x) __attribute__ ((__nothrow__)) ;

extern long double sinhl (long double __x) __attribute__ ((__nothrow__)); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__)) ;

extern long double tanhl (long double __x) __attribute__ ((__nothrow__)); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__)) ;
# 88 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4
extern long double acoshl (long double __x) __attribute__ ((__nothrow__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__)) ;

extern long double asinhl (long double __x) __attribute__ ((__nothrow__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__)) ;

extern long double atanhl (long double __x) __attribute__ ((__nothrow__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__)) ;







extern long double expl (long double __x) __attribute__ ((__nothrow__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__)) ;


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__)) ;


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__)) ;


extern long double logl (long double __x) __attribute__ ((__nothrow__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__)) ;


extern long double log10l (long double __x) __attribute__ ((__nothrow__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__)) ;


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
# 128 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4
extern long double expm1l (long double __x) __attribute__ ((__nothrow__)); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__)) ;


extern long double log1pl (long double __x) __attribute__ ((__nothrow__)); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__)) ;


extern long double logbl (long double __x) __attribute__ ((__nothrow__)); extern long double __logbl (long double __x) __attribute__ ((__nothrow__)) ;






extern long double exp2l (long double __x) __attribute__ ((__nothrow__)); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__)) ;


extern long double log2l (long double __x) __attribute__ ((__nothrow__)); extern long double __log2l (long double __x) __attribute__ ((__nothrow__)) ;
# 153 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4
extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__)) ;


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__)); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__)) ;





extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__)) ;






extern long double cbrtl (long double __x) __attribute__ ((__nothrow__)); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__)) ;
# 178 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4
extern long double ceill (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;


extern long double fabsl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;


extern long double floorl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__)) ;




extern int __isinfl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int isinfl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int finitel (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__)) ;



extern long double significandl (long double __x) __attribute__ ((__nothrow__)); extern long double __significandl (long double __x) __attribute__ ((__nothrow__)) ;





extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;






extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;





extern int __isnanl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern int isnanl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double j0l (long double) __attribute__ ((__nothrow__)); extern long double __j0l (long double) __attribute__ ((__nothrow__)) ;
extern long double j1l (long double) __attribute__ ((__nothrow__)); extern long double __j1l (long double) __attribute__ ((__nothrow__)) ;
extern long double jnl (int, long double) __attribute__ ((__nothrow__)); extern long double __jnl (int, long double) __attribute__ ((__nothrow__)) ;
extern long double y0l (long double) __attribute__ ((__nothrow__)); extern long double __y0l (long double) __attribute__ ((__nothrow__)) ;
extern long double y1l (long double) __attribute__ ((__nothrow__)); extern long double __y1l (long double) __attribute__ ((__nothrow__)) ;
extern long double ynl (int, long double) __attribute__ ((__nothrow__)); extern long double __ynl (int, long double) __attribute__ ((__nothrow__)) ;






extern long double erfl (long double) __attribute__ ((__nothrow__)); extern long double __erfl (long double) __attribute__ ((__nothrow__)) ;
extern long double erfcl (long double) __attribute__ ((__nothrow__)); extern long double __erfcl (long double) __attribute__ ((__nothrow__)) ;
extern long double lgammal (long double) __attribute__ ((__nothrow__)); extern long double __lgammal (long double) __attribute__ ((__nothrow__)) ;






extern long double tgammal (long double) __attribute__ ((__nothrow__)); extern long double __tgammal (long double) __attribute__ ((__nothrow__)) ;





extern long double gammal (long double) __attribute__ ((__nothrow__)); extern long double __gammal (long double) __attribute__ ((__nothrow__)) ;






extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__)); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__)) ;







extern long double rintl (long double __x) __attribute__ ((__nothrow__)); extern long double __rintl (long double __x) __attribute__ ((__nothrow__)) ;


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;



extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__)) ;



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__)) ;



extern int ilogbl (long double __x) __attribute__ ((__nothrow__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__)) ;




extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__)); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__)) ;



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__)); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__)) ;



extern long double roundl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;



extern long double truncl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__)); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__)) ;






extern long int lrintl (long double __x) __attribute__ ((__nothrow__)); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__)) ;
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__)); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__)) ;



extern long int lroundl (long double __x) __attribute__ ((__nothrow__)); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__)) ;
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__)); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__)) ;



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__)) ;


extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;



extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__)); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__)) ;
# 371 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4
extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__)); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__)) ;
# 133 "/usr/include/math.h" 2 3 4
# 148 "/usr/include/math.h" 3 4
extern int signgam;
# 189 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
# 301 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 326 "/usr/include/math.h" 3 4
struct exception

  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };




extern int matherr (struct exception *__exc);
# 3 "glb.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 32 "/usr/include/string.h" 3 4
# 1 "/usr/bin/../lib/clang/3.4/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4
# 46 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 96 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 129 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));







# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 164 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 236 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 263 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 285 "/usr/include/string.h" 3 4
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 315 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 342 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
# 399 "/usr/include/string.h" 3 4
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__)) ;
# 427 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
# 445 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__)) ;





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 489 "/usr/include/string.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 517 "/usr/include/string.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 534 "/usr/include/string.h" 3 4
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 557 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__)) ;


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 4 "glb.c" 2
# 1 "/usr/include/ctype.h" 1 3 4
# 39 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/byteswap.h" 1 3 4
# 28 "/usr/include/i386-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/i386-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/i386-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/i386-linux-gnu/bits/byteswap.h" 2 3 4
# 61 "/usr/include/endian.h" 2 3 4
# 40 "/usr/include/ctype.h" 2 3 4






enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 79 "/usr/include/ctype.h" 3 4
extern const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 110 "/usr/include/ctype.h" 3 4
extern int isalnum (int) __attribute__ ((__nothrow__)) ;
extern int isalpha (int) __attribute__ ((__nothrow__)) ;
extern int iscntrl (int) __attribute__ ((__nothrow__)) ;
extern int isdigit (int) __attribute__ ((__nothrow__)) ;
extern int islower (int) __attribute__ ((__nothrow__)) ;
extern int isgraph (int) __attribute__ ((__nothrow__)) ;
extern int isprint (int) __attribute__ ((__nothrow__)) ;
extern int ispunct (int) __attribute__ ((__nothrow__)) ;
extern int isspace (int) __attribute__ ((__nothrow__)) ;
extern int isupper (int) __attribute__ ((__nothrow__)) ;
extern int isxdigit (int) __attribute__ ((__nothrow__)) ;



extern int tolower (int __c) __attribute__ ((__nothrow__)) ;


extern int toupper (int __c) __attribute__ ((__nothrow__)) ;
# 136 "/usr/include/ctype.h" 3 4
extern int isblank (int) __attribute__ ((__nothrow__)) ;
# 150 "/usr/include/ctype.h" 3 4
extern int isascii (int __c) __attribute__ ((__nothrow__)) ;



extern int toascii (int __c) __attribute__ ((__nothrow__)) ;



extern int _toupper (int) __attribute__ ((__nothrow__)) ;
extern int _tolower (int) __attribute__ ((__nothrow__)) ;
# 271 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__)) ;
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__)) ;
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__)) ;
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__)) ;
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__)) ;
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__)) ;
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__)) ;
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__)) ;
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__)) ;
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__)) ;
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__)) ;

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__)) ;



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__)) ;
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__)) ;


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__)) ;
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__)) ;
# 5 "glb.c" 2

# 1 "/usr/include/spl/gwindow.h" 1 3 4
# 28 "/usr/include/spl/gwindow.h" 3 4
# 1 "/usr/include/spl/cslib.h" 1 3 4
# 39 "/usr/include/spl/cslib.h" 3 4
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/bin/../lib/clang/3.4/include/stddef.h" 1 3 4
# 33 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/i386-linux-gnu/bits/waitflags.h" 1 3 4
# 50 "/usr/include/i386-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/i386-linux-gnu/bits/waitstatus.h" 1 3 4
# 66 "/usr/include/i386-linux-gnu/bits/waitstatus.h" 3 4
union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 43 "/usr/include/stdlib.h" 2 3 4
# 67 "/usr/include/stdlib.h" 3 4
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
# 97 "/usr/include/stdlib.h" 3 4
typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__)) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





# 1 "/usr/include/i386-linux-gnu/sys/types.h" 1 3 4
# 33 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 60 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 98 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 115 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 59 "/usr/include/time.h" 3 4
typedef __clock_t clock_t;
# 75 "/usr/include/time.h" 3 4
typedef __time_t time_t;
# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/i386-linux-gnu/sys/types.h" 2 3 4
# 146 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
# 1 "/usr/bin/../lib/clang/3.4/include/stddef.h" 1 3 4
# 147 "/usr/include/i386-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/i386-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/i386-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/i386-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/i386-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/i386-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/i386-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/i386-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/i386-linux-gnu/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;






# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 44 "/usr/include/i386-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/i386-linux-gnu/bits/time.h" 1 3 4
# 30 "/usr/include/i386-linux-gnu/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/i386-linux-gnu/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 64 "/usr/include/i386-linux-gnu/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 106 "/usr/include/i386-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/i386-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 220 "/usr/include/i386-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/i386-linux-gnu/sys/sysmacros.h" 1 3 4
# 26 "/usr/include/i386-linux-gnu/sys/sysmacros.h" 3 4
__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 223 "/usr/include/i386-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/i386-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/i386-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/i386-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[36];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;
# 81 "/usr/include/i386-linux-gnu/bits/pthreadtypes.h" 3 4
typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;





typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;





    int __kind;







    unsigned int __nusers;
    __extension__ union
    {
      struct
      {
 short __espins;
 short __elision;



      } d;
      __pthread_slist_t __list;
    };

  } __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{
# 194 "/usr/include/i386-linux-gnu/bits/pthreadtypes.h" 3 4
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;


    unsigned char __flags;
    unsigned char __shared;
    unsigned char __pad1;
    unsigned char __pad2;
    int __writer;
  } __data;

  char __size[32];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[20];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/i386-linux-gnu/sys/types.h" 2 3 4
# 315 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__)) ;


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__)) ;





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__)) ;

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__)) ;




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__)) ;







extern double drand48 (void) __attribute__ ((__nothrow__)) ;
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__)) ;
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__)) ;
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__)) ;
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 466 "/usr/include/stdlib.h" 3 4
extern void *malloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;
# 480 "/usr/include/stdlib.h" 3 4
extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__)) ;




extern void cfree (void *__ptr) __attribute__ ((__nothrow__)) ;




# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/bin/../lib/clang/3.4/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__)) ;
# 493 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 515 "/usr/include/stdlib.h" 3 4
extern void abort (void) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 535 "/usr/include/stdlib.h" 3 4
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
# 557 "/usr/include/stdlib.h" 3 4
extern void _Exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 578 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__)) ;
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 642 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 717 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;
# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 755 "/usr/include/stdlib.h" 3 4
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 775 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
# 812 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__)) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__)) ;

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__)) ;
# 888 "/usr/include/stdlib.h" 3 4
extern int rpmatch (const char *__response) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 899 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 951 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



# 1 "/usr/include/i386-linux-gnu/bits/stdlib-float.h" 1 3 4
# 956 "/usr/include/stdlib.h" 2 3 4
# 40 "/usr/include/spl/cslib.h" 2 3 4
# 1 "/usr/bin/../lib/clang/3.4/include/stddef.h" 1 3 4
# 41 "/usr/include/spl/cslib.h" 2 3 4
# 63 "/usr/include/spl/cslib.h" 3 4
typedef enum {false, true} bool;







typedef char *string;
# 80 "/usr/include/spl/cslib.h" 3 4
typedef void (*proc)();
# 105 "/usr/include/spl/cslib.h" 3 4
void *getBlock(size_t nbytes);
# 115 "/usr/include/spl/cslib.h" 3 4
void *getTypedBlock(size_t nbytes, string type);
# 128 "/usr/include/spl/cslib.h" 3 4
void freeBlock(void *ptr);
# 142 "/usr/include/spl/cslib.h" 3 4
string getBlockType(void *ptr);
# 151 "/usr/include/spl/cslib.h" 3 4
void setBlockData(void *ptr, void *value);
# 160 "/usr/include/spl/cslib.h" 3 4
void *getBlockData(void *ptr);
# 209 "/usr/include/spl/cslib.h" 3 4
   void error(string msg, ...) __attribute__ ((noreturn));
# 29 "/usr/include/spl/gwindow.h" 2 3 4
# 1 "/usr/include/spl/gtypes.h" 1 3 4
# 29 "/usr/include/spl/gtypes.h" 3 4
# 1 "/usr/include/spl/generic.h" 1 3 4
# 29 "/usr/include/spl/generic.h" 3 4
# 1 "/usr/include/spl/cmpfn.h" 1 3 4
# 41 "/usr/include/spl/cmpfn.h" 3 4
typedef int (*CompareFn)(const void *p1, const void *p2);
# 50 "/usr/include/spl/cmpfn.h" 3 4
int intCmpFn(const void *p1, const void *p2);
# 59 "/usr/include/spl/cmpfn.h" 3 4
int shortCmpFn(const void *p1, const void *p2);
# 68 "/usr/include/spl/cmpfn.h" 3 4
int longCmpFn(const void *p1, const void *p2);
# 77 "/usr/include/spl/cmpfn.h" 3 4
int charCmpFn(const void *p1, const void *p2);
# 86 "/usr/include/spl/cmpfn.h" 3 4
int floatCmpFn(const void *p1, const void *p2);
# 95 "/usr/include/spl/cmpfn.h" 3 4
int doubleCmpFn(const void *p1, const void *p2);
# 104 "/usr/include/spl/cmpfn.h" 3 4
int unsignedCmpFn(const void *p1, const void *p2);
# 113 "/usr/include/spl/cmpfn.h" 3 4
int unsignedShortCmpFn(const void *p1, const void *p2);
# 122 "/usr/include/spl/cmpfn.h" 3 4
int unsignedLongCmpFn(const void *p1, const void *p2);
# 131 "/usr/include/spl/cmpfn.h" 3 4
int unsignedCharCmpFn(const void *p1, const void *p2);
# 140 "/usr/include/spl/cmpfn.h" 3 4
int stringCmpFn(const void *p1, const void *p2);
# 150 "/usr/include/spl/cmpfn.h" 3 4
int pointerCmpFn(const void *p1, const void *p2);
# 30 "/usr/include/spl/generic.h" 2 3 4
# 56 "/usr/include/spl/generic.h" 3 4
typedef union {
    int intRep;
    short shortRep;
    long longRep;
    float floatRep;
    double doubleRep;
    char charRep;
    bool boolRep;
    unsigned unsignedRep;
    unsigned short unsignedShortRep;
    unsigned long unsignedLongRep;
    unsigned char unsignedCharRep;
    void *pointerRep;
} GenericType;
# 78 "/usr/include/spl/generic.h" 3 4
typedef void (*FetchFn)(va_list args, GenericType *dst);
# 87 "/usr/include/spl/generic.h" 3 4
typedef void (*StoreFn)(GenericType src, void *dst);







typedef string (*ToStringFn)(GenericType dst);
# 104 "/usr/include/spl/generic.h" 3 4
int size(void *arg);
# 113 "/usr/include/spl/generic.h" 3 4
bool isEmptyGeneric(int size, ...);
# 122 "/usr/include/spl/generic.h" 3 4
void clear(void *arg);
# 131 "/usr/include/spl/generic.h" 3 4
void *clone(void *arg);
# 142 "/usr/include/spl/generic.h" 3 4
void *get(void *arg, ...);
# 153 "/usr/include/spl/generic.h" 3 4
void set(void *arg, ...);
# 165 "/usr/include/spl/generic.h" 3 4
void put(void *arg, ...);
# 174 "/usr/include/spl/generic.h" 3 4
bool containsKey(void *arg, void *key);
# 184 "/usr/include/spl/generic.h" 3 4
bool containsGeneric(int size, ...);
# 195 "/usr/include/spl/generic.h" 3 4
void add(void *arg, ...);
# 206 "/usr/include/spl/generic.h" 3 4
void xremove(void *arg, ...);
# 217 "/usr/include/spl/generic.h" 3 4
void enqueue(void *arg, ...);
# 226 "/usr/include/spl/generic.h" 3 4
void *dequeue(void *arg);
# 235 "/usr/include/spl/generic.h" 3 4
void *peek(void *arg);
# 244 "/usr/include/spl/generic.h" 3 4
bool equals(void *s1, void *s2);
# 254 "/usr/include/spl/generic.h" 3 4
bool isSubset(void *s1, void *s2);
# 263 "/usr/include/spl/generic.h" 3 4
void *xunion(void *s1, void *s2);
# 272 "/usr/include/spl/generic.h" 3 4
void *intersection(void *s1, void *s2);
# 281 "/usr/include/spl/generic.h" 3 4
void *setDifference(void *s1, void *s2);
# 290 "/usr/include/spl/generic.h" 3 4
double getXGeneric(int size, ...);
# 299 "/usr/include/spl/generic.h" 3 4
double getYGeneric(int size, ...);
# 308 "/usr/include/spl/generic.h" 3 4
double getWidthGeneric(int size, ...);
# 317 "/usr/include/spl/generic.h" 3 4
double getHeightGeneric(int size, ...);
# 326 "/usr/include/spl/generic.h" 3 4
string toStringGeneric(int size, ...);
# 335 "/usr/include/spl/generic.h" 3 4
void setVisible(void *arg, bool flag);
# 344 "/usr/include/spl/generic.h" 3 4
bool isVisible(void *arg);
# 353 "/usr/include/spl/generic.h" 3 4
void setColor(void *arg, string color);
# 362 "/usr/include/spl/generic.h" 3 4
int getTypeSizeForType(string type);
# 371 "/usr/include/spl/generic.h" 3 4
CompareFn getCompareFnForType(string type);
# 388 "/usr/include/spl/generic.h" 3 4
FetchFn getFetchFnForType(string type);
# 405 "/usr/include/spl/generic.h" 3 4
StoreFn getStoreFnForType(string type);
# 415 "/usr/include/spl/generic.h" 3 4
ToStringFn getToStringFn(string type);
# 30 "/usr/include/spl/gtypes.h" 2 3 4








typedef struct {
   double x;
   double y;
} GPoint;
# 50 "/usr/include/spl/gtypes.h" 3 4
typedef struct {
   double width;
   double height;
} GDimension;
# 62 "/usr/include/spl/gtypes.h" 3 4
typedef struct {
   double x;
   double y;
   double width;
   double height;
} GRectangle;
# 77 "/usr/include/spl/gtypes.h" 3 4
GPoint createGPoint(double x, double y);
# 86 "/usr/include/spl/gtypes.h" 3 4
double getXGPoint(GPoint pt);
# 95 "/usr/include/spl/gtypes.h" 3 4
double getYGPoint(GPoint pt);
# 105 "/usr/include/spl/gtypes.h" 3 4
GDimension createGDimension(double width, double height);
# 114 "/usr/include/spl/gtypes.h" 3 4
double getWidthGDimension(GDimension dim);
# 123 "/usr/include/spl/gtypes.h" 3 4
double getHeightGDimension(GDimension dim);
# 132 "/usr/include/spl/gtypes.h" 3 4
GRectangle createGRectangle(double x, double y, double width, double height);
# 141 "/usr/include/spl/gtypes.h" 3 4
double getXGRectangle(GRectangle r);
# 150 "/usr/include/spl/gtypes.h" 3 4
double getYGRectangle(GRectangle r);
# 159 "/usr/include/spl/gtypes.h" 3 4
double getWidthGRectangle(GRectangle r);
# 168 "/usr/include/spl/gtypes.h" 3 4
double getHeightGRectangle(GRectangle r);
# 177 "/usr/include/spl/gtypes.h" 3 4
bool isEmptyGRectangle(GRectangle r);
# 186 "/usr/include/spl/gtypes.h" 3 4
bool containsGRectangle(GRectangle r, GPoint pt);
# 30 "/usr/include/spl/gwindow.h" 2 3 4



typedef void *GObject;
# 71 "/usr/include/spl/gwindow.h" 3 4
typedef struct GWindowCDT *GWindow;
# 82 "/usr/include/spl/gwindow.h" 3 4
GWindow newGWindow(double width, double height);
# 91 "/usr/include/spl/gwindow.h" 3 4
void closeGWindow(GWindow gw);
# 102 "/usr/include/spl/gwindow.h" 3 4
void requestFocus(GWindow gw);
# 111 "/usr/include/spl/gwindow.h" 3 4
void clearGWindow(GWindow gw);
# 120 "/usr/include/spl/gwindow.h" 3 4
void setVisibleGWindow(GWindow gw, bool flag);
# 129 "/usr/include/spl/gwindow.h" 3 4
bool isVisibleGWindow(GWindow gw);
# 138 "/usr/include/spl/gwindow.h" 3 4
void drawLine(GWindow gw, double x0, double y0, double x1, double y1);
# 150 "/usr/include/spl/gwindow.h" 3 4
GPoint drawPolarLine(GWindow gw, double x, double y, double r, double theta);
# 159 "/usr/include/spl/gwindow.h" 3 4
void drawOval(GWindow gw, double x, double y, double width, double height);
# 168 "/usr/include/spl/gwindow.h" 3 4
void fillOval(GWindow gw, double x, double y, double width, double height);
# 177 "/usr/include/spl/gwindow.h" 3 4
void drawRect(GWindow gw, double x, double y, double width, double height);
# 186 "/usr/include/spl/gwindow.h" 3 4
void fillRect(GWindow gw, double x, double y, double width, double height);
# 203 "/usr/include/spl/gwindow.h" 3 4
void setColorGWindow(GWindow gw, string color);
# 215 "/usr/include/spl/gwindow.h" 3 4
string getColorGWindow(GWindow gw);
# 224 "/usr/include/spl/gwindow.h" 3 4
double getWidthGWindow(GWindow gw);
# 233 "/usr/include/spl/gwindow.h" 3 4
double getHeightGWindow(GWindow gw);
# 242 "/usr/include/spl/gwindow.h" 3 4
void repaint(GWindow gw);
# 251 "/usr/include/spl/gwindow.h" 3 4
void setWindowTitle(GWindow gw, string title);
# 260 "/usr/include/spl/gwindow.h" 3 4
string getWindowTitle(GWindow gw);
# 269 "/usr/include/spl/gwindow.h" 3 4
void draw(GWindow gw, GObject gobj);
# 279 "/usr/include/spl/gwindow.h" 3 4
void drawAt(GWindow gw, GObject gobj, double x, double y);
# 292 "/usr/include/spl/gwindow.h" 3 4
void addGWindow(GWindow gw, GObject gobj);
# 302 "/usr/include/spl/gwindow.h" 3 4
void addAt(GWindow gw, GObject gobj, double x, double y);
# 315 "/usr/include/spl/gwindow.h" 3 4
void addToRegion(GWindow gw, GObject gobj, string region);
# 324 "/usr/include/spl/gwindow.h" 3 4
void removeGWindow(GWindow gw, GObject gobj);
# 335 "/usr/include/spl/gwindow.h" 3 4
GObject getGObjectAt(GWindow gw, double x, double y);
# 350 "/usr/include/spl/gwindow.h" 3 4
void setRegionAlignment(GWindow gw, string region, string align);
# 360 "/usr/include/spl/gwindow.h" 3 4
void pause(double milliseconds);
# 7 "glb.c" 2
# 1 "/usr/include/spl/gevents.h" 1 3 4
# 33 "/usr/include/spl/gevents.h" 3 4
# 1 "/usr/include/spl/gtimer.h" 1 3 4
# 37 "/usr/include/spl/gtimer.h" 3 4
typedef struct GTimerCDT *GTimer;
# 48 "/usr/include/spl/gtimer.h" 3 4
GTimer newGTimer(double milliseconds);
# 57 "/usr/include/spl/gtimer.h" 3 4
void freeGTimer(GTimer timer);
# 69 "/usr/include/spl/gtimer.h" 3 4
void startTimer(GTimer timer);
# 78 "/usr/include/spl/gtimer.h" 3 4
void stopTimer(GTimer timer);
# 34 "/usr/include/spl/gevents.h" 2 3 4
# 46 "/usr/include/spl/gevents.h" 3 4
typedef enum {
   ACTION_EVENT = 0x010,
   KEY_EVENT = 0x020,
   TIMER_EVENT = 0x040,
   WINDOW_EVENT = 0x080,
   MOUSE_EVENT = 0x100,
   CLICK_EVENT = 0x200,
   ANY_EVENT = 0x3F0
} EventClassType;







typedef enum {
   WINDOW_CLOSED = WINDOW_EVENT + 1,
   WINDOW_RESIZED = WINDOW_EVENT + 2,
   ACTION_PERFORMED = ACTION_EVENT + 1,
   MOUSE_CLICKED = MOUSE_EVENT + 1,
   MOUSE_PRESSED = MOUSE_EVENT + 2,
   MOUSE_RELEASED = MOUSE_EVENT + 3,
   MOUSE_MOVED = MOUSE_EVENT + 4,
   MOUSE_DRAGGED = MOUSE_EVENT + 5,
   KEY_PRESSED = KEY_EVENT + 1,
   KEY_RELEASED = KEY_EVENT + 2,
   KEY_TYPED = KEY_EVENT + 3,
   TIMER_TICKED = TIMER_EVENT + 1
} EventType;
# 84 "/usr/include/spl/gevents.h" 3 4
typedef enum {
   SHIFT_DOWN = 1 << 0,
   CTRL_DOWN = 1 << 1,
   META_DOWN = 1 << 2,
   ALT_DOWN = 1 << 3,
   ALT_GRAPH_DOWN = 1 << 4,
   BUTTON1_DOWN = 1 << 5,
   BUTTON2_DOWN = 1 << 6,
   BUTTON3_DOWN = 1 << 7
} ModifierCodes;







typedef enum {
   BACKSPACE_KEY = 8,
   TAB_KEY = 9,
   ENTER_KEY = 10,
   CLEAR_KEY = 12,
   ESCAPE_KEY = 27,
   PAGE_UP_KEY = 33,
   PAGE_DOWN_KEY = 34,
   END_KEY = 35,
   HOME_KEY = 36,
   LEFT_ARROW_KEY = 37,
   UP_ARROW_KEY = 38,
   RIGHT_ARROW_KEY = 39,
   DOWN_ARROW_KEY = 40,
   F1_KEY = 112,
   F2_KEY = 113,
   F3_KEY = 114,
   F4_KEY = 115,
   F5_KEY = 116,
   F6_KEY = 117,
   F7_KEY = 118,
   F8_KEY = 119,
   F9_KEY = 120,
   F10_KEY = 121,
   F11_KEY = 122,
   F12_KEY = 123,
   DELETE_KEY = 127,
   HELP_KEY = 156
} KeyCodes;
# 159 "/usr/include/spl/gevents.h" 3 4
typedef struct GEventCDT *GEvent;
# 168 "/usr/include/spl/gevents.h" 3 4
void freeEvent(GEvent e);
# 177 "/usr/include/spl/gevents.h" 3 4
EventClassType getEventClass(GEvent e);
# 186 "/usr/include/spl/gevents.h" 3 4
EventType getEventType(GEvent e);
# 197 "/usr/include/spl/gevents.h" 3 4
GWindow getGWindow(GEvent e);
# 211 "/usr/include/spl/gevents.h" 3 4
double getEventTime(GEvent e);
# 220 "/usr/include/spl/gevents.h" 3 4
void setEventTime(GEvent e, double time);
# 235 "/usr/include/spl/gevents.h" 3 4
int getModifiers(GEvent e);
# 244 "/usr/include/spl/gevents.h" 3 4
void setModifiers(GEvent e, int modifiers);
# 254 "/usr/include/spl/gevents.h" 3 4
void waitForClick();
# 297 "/usr/include/spl/gevents.h" 3 4
GEvent waitForEvent(int mask);
# 309 "/usr/include/spl/gevents.h" 3 4
GEvent getNextEvent(int mask);







typedef GEvent GWindowEvent;
# 328 "/usr/include/spl/gevents.h" 3 4
GWindowEvent newGWindowEvent(EventType type, GWindow gw);







typedef GEvent GActionEvent;
# 346 "/usr/include/spl/gevents.h" 3 4
GActionEvent newGActionEvent(EventType type, GObject source,
                                             string actionCommand);
# 356 "/usr/include/spl/gevents.h" 3 4
GObject getSource(GActionEvent e);
# 365 "/usr/include/spl/gevents.h" 3 4
string getActionCommand(void *arg);







typedef GEvent GMouseEvent;
# 384 "/usr/include/spl/gevents.h" 3 4
GMouseEvent newGMouseEvent(EventType type, GWindow gw, double x, double y);
# 393 "/usr/include/spl/gevents.h" 3 4
double getXGEvent(GMouseEvent e);
# 402 "/usr/include/spl/gevents.h" 3 4
double getYGEvent(GMouseEvent e);







typedef GEvent GKeyEvent;
# 422 "/usr/include/spl/gevents.h" 3 4
GKeyEvent newGKeyEvent(EventType type, GWindow gw, int keyChar, int keyCode);
# 435 "/usr/include/spl/gevents.h" 3 4
char getKeyChar(GKeyEvent e);
# 444 "/usr/include/spl/gevents.h" 3 4
int getKeyCode(GKeyEvent e);







typedef GEvent GTimerEvent;
# 462 "/usr/include/spl/gevents.h" 3 4
GEvent newGTimerEvent(EventType type, GTimer timer);
# 471 "/usr/include/spl/gevents.h" 3 4
GTimer getGTimer(GTimerEvent e);
# 8 "glb.c" 2
# 1 "/usr/include/spl/gobjects.h" 1 3 4
# 33 "/usr/include/spl/gobjects.h" 3 4
# 1 "/usr/include/spl/vector.h" 1 3 4
# 37 "/usr/include/spl/vector.h" 3 4
typedef struct VectorCDT *Vector;
# 48 "/usr/include/spl/vector.h" 3 4
Vector newVector(void);
# 57 "/usr/include/spl/vector.h" 3 4
void freeVector(Vector vector);
# 68 "/usr/include/spl/vector.h" 3 4
Vector arrayToVector(void *array[], int n);
# 79 "/usr/include/spl/vector.h" 3 4
void **vectorToArray(Vector vector);
# 88 "/usr/include/spl/vector.h" 3 4
bool isEmptyVector(Vector vector);
# 97 "/usr/include/spl/vector.h" 3 4
int sizeVector(Vector vector);
# 106 "/usr/include/spl/vector.h" 3 4
void clearVector(Vector vector);
# 117 "/usr/include/spl/vector.h" 3 4
Vector cloneVector(Vector vector);
# 127 "/usr/include/spl/vector.h" 3 4
void *getVector(Vector vector, int index);
# 137 "/usr/include/spl/vector.h" 3 4
void setVector(Vector vector, int index, void *value);
# 146 "/usr/include/spl/vector.h" 3 4
void addVector(Vector vector, void *value);
# 157 "/usr/include/spl/vector.h" 3 4
void insert(Vector vector, int index, void *value);
void insertAt(Vector vector, int index, void *value);
# 169 "/usr/include/spl/vector.h" 3 4
void removeVector(Vector vector, int index);
void removeAt(Vector vector, int index);
# 34 "/usr/include/spl/gobjects.h" 2 3 4
# 96 "/usr/include/spl/gobjects.h" 3 4
void freeGObject(GObject gobj);
# 105 "/usr/include/spl/gobjects.h" 3 4
double getXGObject(GObject gobj);
# 114 "/usr/include/spl/gobjects.h" 3 4
double getYGObject(GObject gobj);
# 123 "/usr/include/spl/gobjects.h" 3 4
GPoint getLocation(GObject gobj);
# 132 "/usr/include/spl/gobjects.h" 3 4
void setLocation(GObject gobj, double x, double y);
# 142 "/usr/include/spl/gobjects.h" 3 4
void move(GObject gobj, double dx, double dy);
# 152 "/usr/include/spl/gobjects.h" 3 4
double getWidthGObject(GObject gobj);
# 162 "/usr/include/spl/gobjects.h" 3 4
double getHeightGObject(GObject gobj);
# 171 "/usr/include/spl/gobjects.h" 3 4
GDimension getSize(GObject gobj);
# 187 "/usr/include/spl/gobjects.h" 3 4
GRectangle getBounds(GObject gobj);
# 215 "/usr/include/spl/gobjects.h" 3 4
void setColorGObject(GObject gobj, string color);
# 228 "/usr/include/spl/gobjects.h" 3 4
string getColorGObject(GObject gobj);
# 237 "/usr/include/spl/gobjects.h" 3 4
void setVisibleGObject(GObject gobj, bool flag);
# 246 "/usr/include/spl/gobjects.h" 3 4
bool isVisibleGObject(GObject gobj);
# 256 "/usr/include/spl/gobjects.h" 3 4
void sendForward(GObject gobj);
# 268 "/usr/include/spl/gobjects.h" 3 4
void sendToFront(GObject gobj);
# 278 "/usr/include/spl/gobjects.h" 3 4
void sendBackward(GObject gobj);
# 290 "/usr/include/spl/gobjects.h" 3 4
void sendToBack(GObject gobj);
# 299 "/usr/include/spl/gobjects.h" 3 4
bool containsGObject(GObject gobj, double x, double y);
# 309 "/usr/include/spl/gobjects.h" 3 4
string getType(GObject gobj);
# 324 "/usr/include/spl/gobjects.h" 3 4
GObject getParent(GObject gobj);
# 337 "/usr/include/spl/gobjects.h" 3 4
void setSize(GObject gobj, double width, double height);
# 348 "/usr/include/spl/gobjects.h" 3 4
void setBounds(GObject gobj, double x, double y, double width, double height);
# 358 "/usr/include/spl/gobjects.h" 3 4
void setFilled(GObject gobj, bool flag);
# 367 "/usr/include/spl/gobjects.h" 3 4
bool isFilled(GObject gobj);
# 376 "/usr/include/spl/gobjects.h" 3 4
void setFillColor(GObject gobj, string color);
# 387 "/usr/include/spl/gobjects.h" 3 4
string getFillColor(GObject gobj);
# 409 "/usr/include/spl/gobjects.h" 3 4
typedef GObject GRect;
# 419 "/usr/include/spl/gobjects.h" 3 4
GRect newGRect(double x, double y, double width, double height);







typedef GRect GRoundRect;
# 438 "/usr/include/spl/gobjects.h" 3 4
GRoundRect newGRoundRect(double x, double y, double width, double height,
                                             double corner);







typedef GRect G3DRect;
# 458 "/usr/include/spl/gobjects.h" 3 4
G3DRect newG3DRect(double x, double y, double width, double height,
                                       bool raised);







void setRaised(G3DRect rect, bool raised);
# 476 "/usr/include/spl/gobjects.h" 3 4
bool isRaised(G3DRect rect);
# 497 "/usr/include/spl/gobjects.h" 3 4
typedef GObject GOval;
# 507 "/usr/include/spl/gobjects.h" 3 4
GObject newGOval(double x, double y, double width, double height);
# 525 "/usr/include/spl/gobjects.h" 3 4
typedef GObject GLine;
# 536 "/usr/include/spl/gobjects.h" 3 4
GObject newGLine(double x0, double y0, double x1, double y1);
# 548 "/usr/include/spl/gobjects.h" 3 4
void setStartPoint(GLine line, double x, double y);
# 558 "/usr/include/spl/gobjects.h" 3 4
void setEndPoint(GLine line, double x, double y);
# 567 "/usr/include/spl/gobjects.h" 3 4
GPoint getStartPoint(GObject gobj);
# 576 "/usr/include/spl/gobjects.h" 3 4
GPoint getEndPoint(GObject gobj);
# 598 "/usr/include/spl/gobjects.h" 3 4
typedef GObject GArc;
# 608 "/usr/include/spl/gobjects.h" 3 4
GArc newGArc(double x, double y, double width, double height,
                                 double start, double sweep);
# 618 "/usr/include/spl/gobjects.h" 3 4
void setStartAngle(GArc arc, double start);
# 627 "/usr/include/spl/gobjects.h" 3 4
double getStartAngle(GArc arc);
# 636 "/usr/include/spl/gobjects.h" 3 4
void setSweepAngle(GArc arc, double start);
# 645 "/usr/include/spl/gobjects.h" 3 4
double getSweepAngle(GArc arc);
# 654 "/usr/include/spl/gobjects.h" 3 4
void setFrameRectangle(GArc garc, double x, double y,
                                  double width, double height);
# 664 "/usr/include/spl/gobjects.h" 3 4
GRectangle getFrameRectangle(GArc arc);
# 708 "/usr/include/spl/gobjects.h" 3 4
typedef GObject GLabel;
# 718 "/usr/include/spl/gobjects.h" 3 4
GLabel newGLabel(string str);
# 736 "/usr/include/spl/gobjects.h" 3 4
void setFont(GLabel label, string font);
# 745 "/usr/include/spl/gobjects.h" 3 4
string getFont(GLabel label);
# 755 "/usr/include/spl/gobjects.h" 3 4
void setLabel(GLabel label, string str);
# 764 "/usr/include/spl/gobjects.h" 3 4
string getLabel(GLabel label);
# 774 "/usr/include/spl/gobjects.h" 3 4
double getFontAscent(GLabel label);
# 784 "/usr/include/spl/gobjects.h" 3 4
double getFontDescent(GLabel label);
# 807 "/usr/include/spl/gobjects.h" 3 4
typedef GObject GImage;
# 819 "/usr/include/spl/gobjects.h" 3 4
GImage newGImage(string filename);
# 857 "/usr/include/spl/gobjects.h" 3 4
typedef GObject GPolygon;
# 866 "/usr/include/spl/gobjects.h" 3 4
GPolygon newGPolygon(void);
# 876 "/usr/include/spl/gobjects.h" 3 4
void addVertex(GPolygon poly, double x, double y);
# 886 "/usr/include/spl/gobjects.h" 3 4
void addEdge(GPolygon poly, double dx, double dy);
# 898 "/usr/include/spl/gobjects.h" 3 4
void addPolarEdge(GPolygon poly, double r, double theta);
# 909 "/usr/include/spl/gobjects.h" 3 4
Vector getVertices(GPolygon poly);
# 920 "/usr/include/spl/gobjects.h" 3 4
typedef GObject GCompound;
# 929 "/usr/include/spl/gobjects.h" 3 4
GObject newGCompound(void);
# 938 "/usr/include/spl/gobjects.h" 3 4
void addGCompound(GCompound compound, GObject gobj);
# 947 "/usr/include/spl/gobjects.h" 3 4
void removeGCompound(GCompound compound, GObject gobj);
# 957 "/usr/include/spl/gobjects.h" 3 4
GObject getGObjectCompound(GCompound compound, double x, double y);
# 966 "/usr/include/spl/gobjects.h" 3 4
typedef enum {
   GARC = 1<<0,
   GCOMPOUND = 1<<1,
   GIMAGE = 1<<2,
   GLABEL = 1<<3,
   GLINE = 1<<4,
   GOVAL = 1<<5,
   GPOLYGON = 1<<6,
   GRECT = 1<<7,
   G3DRECT = 1<<8,
   GROUNDRECT = 1<<9,
   GINTERACTOR = 0x1F<<10,
   GBUTTON = 1<<10,
   GCHECKBOX = 1<<11,
   GCHOOSER = 1<<12,
   GSLIDER = 1<<13,
   GTEXTFIELD = 1<<14
} GObjectTypeBits;
# 9 "glb.c" 2
# 1 "/usr/include/spl/gmath.h" 1 3 4
# 54 "/usr/include/spl/gmath.h" 3 4
double sinDegrees(double angle);
# 64 "/usr/include/spl/gmath.h" 3 4
double cosDegrees(double angle);
# 74 "/usr/include/spl/gmath.h" 3 4
double tanDegrees(double angle);
# 83 "/usr/include/spl/gmath.h" 3 4
double toDegrees(double radians);
# 92 "/usr/include/spl/gmath.h" 3 4
double toRadians(double degrees);
# 101 "/usr/include/spl/gmath.h" 3 4
double vectorDistance(double x, double y);
# 113 "/usr/include/spl/gmath.h" 3 4
double vectorAngle(double x, double y);
# 10 "glb.c" 2
# 1 "/usr/include/spl/ginteractors.h" 1 3 4
# 46 "/usr/include/spl/ginteractors.h" 3 4
typedef GObject GInteractor;
# 56 "/usr/include/spl/ginteractors.h" 3 4
void setActionCommand(GInteractor interactor, string cmd);
# 65 "/usr/include/spl/ginteractors.h" 3 4
string getActionCommandGInteractor(GInteractor interactor);
# 90 "/usr/include/spl/ginteractors.h" 3 4
typedef GInteractor GButton;
# 101 "/usr/include/spl/ginteractors.h" 3 4
GButton newGButton(string label);
# 113 "/usr/include/spl/ginteractors.h" 3 4
typedef GInteractor GCheckBox;
# 124 "/usr/include/spl/ginteractors.h" 3 4
GCheckBox newGCheckBox(string label);
# 133 "/usr/include/spl/ginteractors.h" 3 4
void setSelected(GCheckBox chkbox, bool state);
# 142 "/usr/include/spl/ginteractors.h" 3 4
bool isSelected(GCheckBox chkbox);
# 153 "/usr/include/spl/ginteractors.h" 3 4
typedef GInteractor GSlider;
# 165 "/usr/include/spl/ginteractors.h" 3 4
GSlider newGSlider(int min, int max, int value);
# 174 "/usr/include/spl/ginteractors.h" 3 4
void setValue(GSlider slider, int value);
# 183 "/usr/include/spl/ginteractors.h" 3 4
int getValue(GSlider slider);
# 194 "/usr/include/spl/ginteractors.h" 3 4
typedef GInteractor GTextField;
# 205 "/usr/include/spl/ginteractors.h" 3 4
GTextField newGTextField(int nChars);
# 214 "/usr/include/spl/ginteractors.h" 3 4
void setText(GTextField field, string str);
# 223 "/usr/include/spl/ginteractors.h" 3 4
string getText(GTextField field);
# 246 "/usr/include/spl/ginteractors.h" 3 4
typedef GInteractor GChooser;
# 258 "/usr/include/spl/ginteractors.h" 3 4
GChooser newGChooser(void);
# 267 "/usr/include/spl/ginteractors.h" 3 4
void addItem(GChooser chooser, string item);
# 277 "/usr/include/spl/ginteractors.h" 3 4
void setSelectedItem(GChooser chooser, string item);
# 286 "/usr/include/spl/ginteractors.h" 3 4
string getSelectedItem(GChooser chooser);
# 11 "glb.c" 2

int main_(void)
{
    FILE* fp = fopen("latt.txt", "r");
    FILE* fc = fopen("long.txt", "r");
    FILE* fq = fopen("Coordinates.txt", "w");

    if(fp == ((void*)0) || fc == ((void*)0) || fq == ((void*)0))
    {
        printf("Error");
        return 1;
    }

    GWindow gw = newGWindow(1024, 700);

    char cod1[256], cod2[256];
    double lat[4000], lon[4000], x[4000], y[4000], latti, longi, xm, ym;

    for(int i = 0; fgets(cod1, sizeof(cod1), fp) != ((void*)0) && fgets(cod2, sizeof(cod2), fc) != ((void*)0); i++)
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
