#include "libmx.h"

void	mx_str_reverse(char *s)
{
    int     y = 0;
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
    while (s[y] != '\0')
    {
        mx_printchar(s[y]);
        y++;
    }
    mx_printchar('\n');
}

