#include <stdio.h>
#include <stdbool.h>

bool mx_isdigit(int i);

int main(void)
{
	int i = 55;
	char str = 'A';
	printf("%d\n", mx_isdigit(i));
	return 0;
}

bool mx_isdigit(int i)
{
	if ( i >= 48 && i <= 57 )
		return true;
	else
		return false;
}
