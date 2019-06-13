#include <stdio.h>
#include <stdbool.h>

bool mx_isupper(int c);

int main(void)
{
	char str = 'Z';
	printf("%d\n", mx_isupper(str));
	return 0;
}

bool mx_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return true;
	else
		return false;
}
