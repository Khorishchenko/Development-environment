#include <stdio.h>

void	ft_div(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int div, mod;
	int a, b;
		
	div = 0;
	mod = 0;

	scanf("%d%*c%d", &a, &b);
	ft_div(a, b, &div, &mod);
	printf("%d %d\n", div, mod);
	return (0);
}
