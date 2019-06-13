#include <stdio.h>

int mx_factorial_iter(int n);

int main(void)
{
    int i = 0;
    printf("Enter a number: ");
    scanf("%d", &i);
    printf("%d\n", mx_factorial_iter(i));
    return 0;
}

int mx_factorial_iter(int n)
{
    int	i;
    int	f;

	if (n >= 2)
	{
		i = 0;
		f = n;
		while (++i < n)
			f = f * (n - i);
		return (f);
	}
	else
		return (1);
}

