#include <unistd.h>

int mx_strlen(const char *s);

void mx_printstr(const char *s)
{
    for(int i = 0, n = mx_strlen(s); i < n; i++)
    {
        write(1, &s[i], 1);
    }
    write(1, "\n", 1);
}

