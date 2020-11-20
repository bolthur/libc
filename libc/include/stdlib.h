
#if !defined( BLIBC_STDLIB_H )
#define BLIBC_STDLIB_H

#include <config.h>
#include <stddef.h>

#if defined( __cplusplus )
extern "C" {
#endif

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

typedef struct {
  int quot;
  int rem;
} div_t;

typedef struct {
  long quot;
  long rem;
} ldiv_t;

/*

MB_CUR_MAX
RAND_MAX*/
_BLIBC_PUBLIC double atof( const char* );
_BLIBC_PUBLIC int atoi( const char* );
_BLIBC_PUBLIC long int atol( const char* );
_BLIBC_PUBLIC double strtod( const char*, char** );
_BLIBC_PUBLIC long int strtol( const char*, char**, int );
_BLIBC_PUBLIC unsigned long int strtoul( const char*, char**, int );
_BLIBC_PUBLIC int rand( void );
_BLIBC_PUBLIC void srand( unsigned int );
_BLIBC_PUBLIC void* calloc( size_t, size_t size );
_BLIBC_PUBLIC void free( void* );
_BLIBC_PUBLIC void* malloc( size_t );
_BLIBC_PUBLIC void* realloc( void*, size_t );
_BLIBC_PUBLIC void abort( void );
_BLIBC_PUBLIC int atexit( void ( *func )( void ) );
_BLIBC_PUBLIC void exit( int );
_BLIBC_PUBLIC char* getenv( const char* );
_BLIBC_PUBLIC int system( const char* );
_BLIBC_PUBLIC void* bsearch( const void*, const void*, size_t, size_t, int ( *compar )( const void*, const void* ) );
_BLIBC_PUBLIC void qsort( void*, size_t, size_t, int ( *compar )( const void*, const void* ) );
_BLIBC_PUBLIC int abs( int );
_BLIBC_PUBLIC div_t div( int, int );
_BLIBC_PUBLIC long int labs( long int );
_BLIBC_PUBLIC ldiv_t ldiv( long int, long int );
_BLIBC_PUBLIC int mblen( const char*, size_t );
_BLIBC_PUBLIC int mbtowc( wchar_t*, const char*, size_t );
_BLIBC_PUBLIC int wctomb( char*, wchar_t );
_BLIBC_PUBLIC size_t mbstowcs( wchar_t*, const char*, size_t );
_BLIBC_PUBLIC size_t wcstombs( char*, const wchar_t*, size_t );

#if defined( __cplusplus )
}
#endif

#endif
