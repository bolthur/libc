
#if !defined( BLIBC_STRING_H )
#define BLIBC_STRING_H

#include <config.h>
#include <stddef.h>

#if defined( __cplusplus )
extern "C" {
#endif

_BLIBC_PUBLIC void* memcpy( void*, const void*, size_t );
_BLIBC_PUBLIC void* memmove( void*, const void*, size_t );
_BLIBC_PUBLIC char* strcpy( char*, const char* );
_BLIBC_PUBLIC char* strncpy( char*, const char*, size_t );
_BLIBC_PUBLIC char* strcat( char*, const char* );
_BLIBC_PUBLIC char* strncat( char*, const char*, size_t );
_BLIBC_PUBLIC int memcmp( const void*, const void*, size_t );
_BLIBC_PUBLIC int strcmp( const char*, const char* );
_BLIBC_PUBLIC int strcoll( const char*, const char* );
_BLIBC_PUBLIC int strncmp( const char*, const char*, size_t );
_BLIBC_PUBLIC size_t strxfrm( char*, const char*, size_t );
_BLIBC_PUBLIC void* memchr( const void*, int, size_t );
_BLIBC_PUBLIC char* strchr( const char*, int );
_BLIBC_PUBLIC size_t strcspn( const char*, const char* );
_BLIBC_PUBLIC char* strpbrk( const char*, const char* );
_BLIBC_PUBLIC char* strrchr( const char*, int );
_BLIBC_PUBLIC size_t strspn( const char*, const char* );
_BLIBC_PUBLIC char* strstr( const char*, const char* );
_BLIBC_PUBLIC char* strtok( char*, const char* );
_BLIBC_PUBLIC void* memset( void*, int, size_t );
_BLIBC_PUBLIC char* strerror( int );
_BLIBC_PUBLIC size_t strlen( const char* );

#if defined( __cplusplus )
}
#endif

#endif
