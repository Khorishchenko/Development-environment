#include <stdio.h>

int mx_mid(int a, int b, int c);

int main(void)
{
	int a, b, c;

	printf("Please enter a numbers: ");
	scanf("%d%*c%d%*c%d", &a, &b, &c);
	printf("%d\n", mx_mid(a, b, c));
	return 0;
}

int mx_mid(int a, int b, int c)
{
	if (( a >= b && a <= c ) || ( a <= b && a >= c))
		return a;
	else if (( b >= a && b <= c ) || ( b <= a && b >= c))
		return b;
	else 
		return c;
}
