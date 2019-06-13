#include <stdio.h>

int mx_tolower(int c);

int main(void)
{
	char str = 'z';
	printf("%c\n", mx_tolower(str));
	return 0;
}

int mx_tolower(int c)
{
	if (c >= 97 && c <= 122)
		return c - 32;
	else
		return c;
}
