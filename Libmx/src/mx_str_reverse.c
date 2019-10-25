#include "libmx.h"

char	*mx_str_reverse(char *s)
{
    int     i;
    int     l;
    char    t;
    
    l = 0;
    while (s[l] != '\0')
        l++;
    i = -1;
    while (++i < --l)
    {
        t = s[i];
        s[i] = s[l];
        s[l] = t;
    }
    return (s);
}
