#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n)
{
   unsigned char *v = (unsigned char*) s;
    for(unsigned long i = n - 1; i > 0; i--)
    {
        if( v[i] == c)
        {
            while(i > 0)
            {
                v++;
                i--;
            }
            return (char *) v;
        }
        else 
            continue;
    }
    return NULL;
}

