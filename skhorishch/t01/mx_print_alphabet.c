#include <unistd.h>

void mx_printchar(char c);
void mx_print_alphabet(void);

void mx_print_alphabet(void)
{
    char c;
    char b;
    c = 'A';
    b = 'b';
    while (c <= 'Y' && b <= 'z')
    {
        mx_printchar(c);
        mx_printchar(b);
        c = c + 2;
        b = b + 2;
    }
    mx_printchar('\n');
}
