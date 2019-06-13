#include <stdio.h>

int mx_factorial_rec(int n);

int main(void)
{
    int i = 0;
    printf("Enter a number: ");
    scanf("%d", &i);
    printf("%d\n", mx_factorial_rec(i));
    return 0;
}

int mx_factorial_rec(int n)
{
	if (n >= 2)
		return (n * mx_factorial_rec(n - 1));
	else
		return 1;
}

