
#if !defined( BLIBC_STDBOOL_H )
#define BLIBC_STDBOOL_H

#if ! defined( __cplusplus )
  // check standard version
  #if __STDC_VERSION__ < 199901L
    #error "stdbool.h is part of standard c99 and later"
  #endif
  // add define for c only
  #define bool _Bool
  #define true 1
  #define false 0
#endif

#if defined( __cplusplus )
  // minimum c++11
  #if __cplusplus < 201103L
    #error "stdbool.h is part of standard c++11 and later"
  // deprecation with c++17
  #elif __cplusplus == 201703L
    #warning "stdbool.h has been deprecated with c++17 and will be removed in c++20"
  // removed with c++20
  #elif __cplusplus > 201703L
    #error "stdbool.h has been removed"
  #else
    #define __bool_true_false_are_defined 1
  #endif
#endif

#endif
