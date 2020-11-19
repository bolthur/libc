
#if !defined( BLIBC_SIGNAL_H )
#define BLIBC_SIGNAL_H

#if defined( __cplusplus )
extern "C" {
#endif

typedef int sig_atomic_t;

#define SIG_DFL 0
#define SIG_ERR 1
#define SIG_IGN -1

void ( *signal( int sig, void ( *func )( int ) ) )( int );
int raise( int sig );

#if defined( __cplusplus )
}
#endif

#endif
