
#if !defined( BLIBC_ASSERT_H )
#define BLIBC_ASSERT_H

#include "blibc/config.h"

#if defined( __cplusplus )
extern "C" {
#endif

#ifdef NDEBUG
  #define assert( a ) ( ( void )0 )
#else
  #if __STDC_VERSION__ >= 201112L
    _BLIBC_INTERNAL _Noreturn void __assert( const char* const );
  #else
    _BLIBC_INTERNAL void __assert( const char* const );
  #endif

  #if __STDC_VERSION__ >= 199901L
    #define assert( a ) ( \
      a ? ( void )0 : \
        __assert( \
          "Assertion failed: " #a ", function " \
          __func__ ", file " __FILE__ ", line " \
          __LINE__ "." _BLIBC_NEWLINE \
        ) \
    )
  #else
    #define assert( a ) ( \
      a ? ( void )0 : \
        __assert( \
          "Assertion failed: " #a ", file " __FILE__ \
          ", line " __LINE__ "." _BLIBC_NEWLINE \
        ) \
    )
  #endif
#endif

// static assert introduced with c11
#if __STDC_VERSION__ >= 201112L
  #define static_assert _Static_assert
#endif

#if defined( __cplusplus )
}
#endif

#endif
