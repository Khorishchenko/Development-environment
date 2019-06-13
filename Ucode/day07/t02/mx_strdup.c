#include <stdio.h>

char *mx_strnew(int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);

char *mx_strdup(const char *str) {
    char *dest;
    dest = mx_strnew(mx_strlen(str));
    mx_strcpy(dest, str);
    return dest;
}
