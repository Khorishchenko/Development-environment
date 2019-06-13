#include <stdio.h>

int mx_max(int a, int b, int c);

int main(void)
{
	int x, y, z;
	x = 6;
	y = 2;
	z = 3;
	printf("%d\n", mx_max(x, y, z));
	return 0;
}

int mx_max(int a, int b, int c)
{
	if (a > b && a > c)
		return a;
	else if (b > a && b > c)
		return b;
	else 
		return c;
}
