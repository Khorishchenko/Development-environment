#include <stdio.h>
#include <stdbool.h>

bool mx_is_prime(int num);

int main(void)
{
	int i = 15;
	printf("%d\n", mx_is_prime(i));
	return 0;
}

bool mx_is_prime(int num)
{
	if ( num != 0 && num > 0)
	{
		if ( num % 2 != 0 )
			return true;
		else
			return false;
	}
	else
		return false;
}
