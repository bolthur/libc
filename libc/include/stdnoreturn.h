
#if !defined( BLIBC_STDNORETURN_H )
#define BLIBC_STDNORETURN_H

#if ! defined( __cplusplus )
  // check standard version
  #if __STDC_VERSION__ < 201112L
    #error "stdnoreturn.h is part of standard c11 and later"
  #endif
  // add define for c only
  #define noreturn _Noreturn
#endif

#endif
