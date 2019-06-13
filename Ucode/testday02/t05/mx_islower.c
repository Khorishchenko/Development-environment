#include <stdio.h>
#include <stdbool.h>

bool mx_islower(int c);

int main(void)
{
	char str = 'a';
	printf("%d\n", mx_islower(str));
	return 0;
}

bool mx_islower(int i)
{
	if ( i >= 97 && i <= 122)
		return true;
	else
		return false;
}
