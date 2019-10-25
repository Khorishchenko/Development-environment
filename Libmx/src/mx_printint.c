#include "libmx.h"

void mx_printchar(char c);
void mx_printint( int n);

void mx_printint(int n)
{
	if (n == -2147483648)
	{
		mx_printchar('-');
		mx_printchar('2');
		mx_printint(147483648);
	}
	else if (n < 0)
	{
		mx_printchar('-');
		mx_printint( n *= -1);
	}
	else if (n < 10)
	{
		mx_printchar( n + 48 );
	}
	else
	{
		mx_printint(n / 10);
		mx_printchar(n % 10 + 48);
	}
}
