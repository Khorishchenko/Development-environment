#include <stdio.h>

double mx_pow(double n, unsigned int pow);

int main(void)
{
	int x;
	double  y;
	x = 3;
	y = 2.5;
	printf("%f\n", mx_pow(y, x));
	return (0);
}

double mx_pow(double n, unsigned int pow)
{
	if ( pow == 0 )
		return 1;
	else if ( pow == 1)
		return n;
	else 
		return n * mx_pow(n, pow - 1);
}	
