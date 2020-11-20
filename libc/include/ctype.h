
#if !defined( BLIBC_CTYPE_H )
#define BLIBC_CTYPE_H

#include "config.h"

#if defined( __cplusplus )
extern "C" {
#endif

_BLIBC_PUBLIC int isalnum( int );
_BLIBC_PUBLIC int isalpha( int );
_BLIBC_PUBLIC int islower( int );
_BLIBC_PUBLIC int isupper( int );
_BLIBC_PUBLIC int isdigit( int );
_BLIBC_PUBLIC int isxdigit( int );
_BLIBC_PUBLIC int iscntrl( int );
_BLIBC_PUBLIC int isgraph( int );
_BLIBC_PUBLIC int isspace( int );
_BLIBC_PUBLIC int isprint( int );
_BLIBC_PUBLIC int ispunct( int );
_BLIBC_PUBLIC int tolower( int );
_BLIBC_PUBLIC int toupper( int );

#if defined( __cplusplus )
}
#endif

#endif
