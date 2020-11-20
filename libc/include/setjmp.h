
#if !defined( BLIBC_SETJMP_H )
#define BLIBC_SETJMP_H

#include <config.h>

#if defined( __cplusplus )
extern "C" {
#endif

// FIXME: 23 is arm only value should be moved to
// libplatform and referenced here as extern
typedef int jmp_buf[ 23 ];

_BLIBC_PUBLIC int setjmp( jmp_buf );
_BLIBC_PUBLIC void longjmp( jmp_buf, int );

#if defined( __cplusplus )
}
#endif

#endif
