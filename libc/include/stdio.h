
#if !defined( BLIBC_STDIO_H )
#define BLIBC_STDIO_H

#include <config.h>
#include <stdarg.h>
#include <stddef.h>

#if defined( __cplusplus )
extern "C" {
#endif

#define _IOFBF 1
#define _IOLBF 2
#define _IONBF 3

#define BUFSIZ 0x1000 // random chosen, correct value?

#define EOF -1

#define FILE int // random data type should be gathered from libglue?
#define FILENAME_MAX 128 // random should be gathered from libglue?
#define FOPEN_MAX 1024 // random should be gathered from libglue?
typedef long long fpos_t; // random chosen, correct value?
#define L_tmpnam 4096 // random should be gathered from libglue?

#define SEEK_CUR 1
#define SEEK_END 2
#define SEEK_SET 3

extern FILE* stderr;
extern FILE* stdin;
extern FILE* stdout;

#define TMP_MAX FOPEN_MAX

_BLIBC_PUBLIC int remove( const char* );
_BLIBC_PUBLIC int rename( const char*, const char* );
_BLIBC_PUBLIC FILE* tmpfile( void );
_BLIBC_PUBLIC char* tmpnam( char* );
_BLIBC_PUBLIC int fclose( FILE* );
_BLIBC_PUBLIC int fflush( FILE* );
_BLIBC_PUBLIC FILE* fopen( const char*, const char* );
_BLIBC_PUBLIC FILE* freopen( const char*, const char*, FILE* );
_BLIBC_PUBLIC void setbuf( FILE*, char* );
_BLIBC_PUBLIC int setvbuf( FILE*, char*, int, size_t );
_BLIBC_PUBLIC int fprintf( FILE*, const char*, ... );
_BLIBC_PUBLIC int fscanf( FILE* , const char*, ... );
_BLIBC_PUBLIC int printf( const char*, ... );
_BLIBC_PUBLIC int scanf( const char*, ... );
_BLIBC_PUBLIC int sprintf( char* , const char*, ... );
_BLIBC_PUBLIC int sscanf( const char*, const char*, ... );
_BLIBC_PUBLIC int vfprintf( FILE*, const char*, va_list );
_BLIBC_PUBLIC int vprintf( const char*, va_list );
_BLIBC_PUBLIC int vsprintf( char*, const char* , va_list );
_BLIBC_PUBLIC int fgetc( FILE* );
_BLIBC_PUBLIC char* fgets( char*, int, FILE* );
_BLIBC_PUBLIC int fputc( int, FILE* );
_BLIBC_PUBLIC int fputs( const char*, FILE* );
_BLIBC_PUBLIC int getc( FILE* );
_BLIBC_PUBLIC int getchar( void );
_BLIBC_PUBLIC char* gets( char* );
_BLIBC_PUBLIC int putc( int, FILE* );
_BLIBC_PUBLIC int putchar( int );
_BLIBC_PUBLIC int puts( const char* );
_BLIBC_PUBLIC int ungetc( int, FILE* );
_BLIBC_PUBLIC size_t fread( void*, size_t, size_t, FILE* );
_BLIBC_PUBLIC size_t fwrite( const void*, size_t, size_t, FILE* );
_BLIBC_PUBLIC int fgetpos( FILE*, fpos_t* );
_BLIBC_PUBLIC int fseek( FILE*, long int, int );
_BLIBC_PUBLIC int fsetpos( FILE*, const fpos_t* );
_BLIBC_PUBLIC long int ftell( FILE* );
_BLIBC_PUBLIC void rewind( FILE* );
_BLIBC_PUBLIC void clearerr( FILE* );
_BLIBC_PUBLIC int feof( FILE* );
_BLIBC_PUBLIC int ferror( FILE* );
_BLIBC_PUBLIC void perror( const char* );

#if defined( __cplusplus )
}
#endif

#endif
