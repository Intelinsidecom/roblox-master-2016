#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

FILE* __cdecl __iob_func(void)
{
    static FILE _iob[3] = { *stdin, *stdout, *stderr };
    return _iob;
}

#ifdef __cplusplus
}
#endif