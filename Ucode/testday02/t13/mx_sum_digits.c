#include <stdio.h>

int mx_sum_digits(int num);

int main(void)
{
	int num = 0;
	printf("Please enter a number: ");
	scanf("%d", &num);
	printf("%d\n", mx_sum_digits(num));
	return 0;
}

int mx_sum_digits(int num)
{
	int i;
	i = 0;
	while (num != 0)
	{ 
		i += num % 10;
		num = num / 10;
	}
	return i;
}
