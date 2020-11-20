
#if !defined( BLIBC_ASSERT_H )
#define BLIBC_ASSERT_H

#include "config.h"

#if defined( __cplusplus )
extern "C" {
#endif

#ifdef NDEBUG
  #define assert( a ) ( ( void )0 )
#else
  _BLIBC_INTERNAL void __assert( const char* const );

  #define assert( a ) ( \
    a ? ( void )0 : \
      __assert( \
        "Assertion failed: " #a ", file " __FILE__ \
        ", line " __LINE__ "." _BLIBC_NEWLINE \
      ) \
  )
#endif

#if defined( __cplusplus )
}
#endif

#endif
