#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int x;
	
	x = *a;
	*a = *b;
	*b = x;
}

int	main(void)
{
	int a;
	int b;

	a = 1;
	b = 2;
	ft_swap(&a, &b);
	printf("%d %d\n",a, b);
	return (0);
}
