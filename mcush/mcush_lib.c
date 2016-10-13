/* MCUSH designed by Peng Shulin, all rights reserved. */
#include "mcush.h"
#include <sys/types.h>

caddr_t _sbrk(int incr) {
    extern char _sheap, _eheap;
    static char *heap_end;
    char *prev_heap_end;
    
    if (heap_end == NULL) {
        heap_end = &_sheap;
    }
    prev_heap_end = heap_end;
    if (heap_end + incr > &_eheap) {
        for(;;);
    }
    heap_end += incr;
    return (caddr_t) prev_heap_end;
}

 
#if DEBUG_HALT_MESSAGE
volatile char *halt_message = 0;
void halt(const char *message)
{
    halt_message = (char*)message;
    while(1);
}
#endif


size_t _read( int fd, void *buf, size_t len )
{
    return 0;
}


size_t _write( int fd, const void *buf, size_t len )
{
    return shell_driver_write( buf, len );
}

int _close( int fd )
{
    return 0;
}

off_t _lseek( int fd, off_t offset, int w )
{
    return 0;
}

//int _fstat( int fd, struct stat *s )
int _fstat( int fd, void *s )
{
    return 0;
}

int _isatty( int fd )
{
    return 0;
}

void _exit(int status)
{
    halt("EXIT");
    while(1);
}

void _kill(int pid)
{

}

int _getpid(void)
{
    return 0;
}


