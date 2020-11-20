
#if !defined( BLIBC_SIGNAL_H )
#define BLIBC_SIGNAL_H

#if defined( __cplusplus )
extern "C" {
#endif

typedef int sig_atomic_t;

#undef SIG_DFL
#undef SIG_ERR
#undef SIG_IGN
#define SIG_DFL 0
#define SIG_ERR 1
#define SIG_IGN -1

#undef SIGABRT
#undef SIGFPE
#undef SIGILL
#undef SIGINT
#undef SIGSEGV
#undef SIGTERM
#define SIGABRT 1
#define SIGFPE 2
#define SIGILL 3
#define SIGINT 4
#define SIGSEGV 5
#define SIGTERM 6

_BLIBC_PUBLIC void ( *signal( int sig, void ( *func )( int ) ) )( int );
_BLIBC_PUBLIC int raise( int sig );

#if defined( __cplusplus )
}
#endif

#endif
