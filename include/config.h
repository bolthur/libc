
#if !defined( BLIBC_CONFIG_H )
#define BLIBC_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif

// check for at standard compliant compiler
#if ! defined( __STDC__ ) || __STDC__ != 1
#error "No define for __STDC__ to 1 found ( not standard-compliant )"
#endif

#if defined _BLIBC_STATIC
  #define _BLIBC_PUBLIC
  #define _BLIBC_INTERNAL
#else
  #if defined( _WIN32 ) || defined( __CYGWIN__ )
    #if defined( __BLIBC_BUILD )
      #if defined( __GNUC__ ) && __GNUC__ >= 4
        #define _BLIBC_PUBLIC __attribute__((dllexport))
      #else
        #define _BLIBC_PUBLIC __declspec(dllexport)
      #endif
    #else
      #if defined( __GNUC__ ) && __GNUC__ >= 4
        #define _BLIBC_PUBLIC __attribute__((dllimport))
      #else
        #define _BLIBC_PUBLIC __declspec(dllimport)
      #endif
    #endif
    #define _BLIBC_INTERNAL
  #else
    #if defined( __GNUC__ ) && __GNUC__ >= 4
      #define _BLIBC_PUBLIC __attribute__((visibility("default")))
      #define _BLIBC_INTERNAL __attribute__((visibility("hidden")))
    #else
      #define _BLIBC_PUBLIC
      #define _BLIBC_INTERNAL
    #endif
  #endif
#endif

#define _BLIBC_NEWLINE "\r\n"

#ifdef __cplusplus
}
#endif

#endif
