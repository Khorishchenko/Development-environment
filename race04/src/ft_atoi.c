#include <stdlib.h>
#include <stdio.h>

int    mx_atoi(char *str)
{
    int nb;
    int i;
    int minus;
    
    i = 0;
    while ((str[i] == '\v') || (str[i] == '\f') || (str[i] == '\t') ||
                (str[i] == '\r') || (str[i] == '\n') || (str[i] == ' '))
            i++;
    if (str[i] == 45)
    {
            minus = -1;
            i++;
    }
    while ((str[i] > 48) && (str[i] < 58))
        {
            nb *= 10;
            nb += str[i] - 48;
            i++;
        }
    if (minus == -1)
    {
        nb = nb * minus;
    }
    return nb;
}