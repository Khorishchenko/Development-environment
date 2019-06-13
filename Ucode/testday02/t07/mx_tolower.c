#include <stdio.h>

int mx_tolower(int c);

int main(void)
{
	char str = 'c';
	printf("%c\n", mx_tolower(str));
	return 0;
}

int mx_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return c + 32;
	else
		return c;
}
