#include <unistd.h>
#include <stdio.h>

char *mx_strcpy(char *dst, const char *src)
{
    char *t;
    t = dst;
    while((*t++ = *src++) != 0)
        ;
    return dst;
}
