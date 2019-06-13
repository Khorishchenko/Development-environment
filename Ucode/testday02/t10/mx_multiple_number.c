#include <stdbool.h>
#include <stdio.h>

bool mx_multiple_number(int n, int mult);

int main(void)
{
	int x, y;
	x = 2;
	y = 7;
	printf("%d\n", mx_multiple_number(x, y));
	return 0;
}

bool mx_multiple_number(int n, int mult)
{
	if ( mult % n != 0 )
		return false;
	else
		return true;
}
