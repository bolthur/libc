
#if !defined( BLIBC_ERRNO_H )
#define BLIBC_ERRNO_H

#include "config.h"

#if defined( __cplusplus )
extern "C" {
#endif

_BLIBC_INTERNAL void __errno( void );
#define errno ( *__errno() )

// C only requires the following three
#define ERANGE 1 // Result too large
#define EDOM 2 // Mathematics argument out of domain of function
#define EILSEQ 3 // Illegal byte sequence

#if defined( __cplusplus )
}
#endif

#endif
