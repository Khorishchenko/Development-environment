#include <stdio.h>

void mx_printchar(char c);
void mx_printint(int n);

int main(void)
{
	int num = 0;
	printf("Please enter a number: ");
	scanf("%d", &num);
	mx_printint(num);
	return 0;
}

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
