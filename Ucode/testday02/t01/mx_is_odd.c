#include <stdbool.h>
#include <stdio.h>

bool mx_is_odd(int value);

int main(void)
{
	int x = 2;
	printf("%d\n", mx_is_odd(x));
	return 0;
}

bool mx_is_odd(int value)
{
	if (value % 2 != 0)
		return true;
	else
		return false;
}
