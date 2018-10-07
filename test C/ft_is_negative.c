#include <unistd.h> // для программы номер 1
#include <stdio.h> // для программе номер 2

void	ft_putchar(char c) // программа номер 1 положительное или отрицатилное число!!!
{
	write(1, &c, 1);
}

void	ft_is_negative(int nb)
{
	if (nb > 0)	
		ft_putchar('P');
	else if (nb < 0)
		ft_putchar('N');
	ft_putchar('\n');
}

int	main(void)
{
	ft_is_negative(99);
	return (0);
}

void	ft_is_negative(void) // прграмма номер 2 то же самое!!!
{
	int n;
	
	scanf("%d", &n);
	if (n < 0)
		printf("N\n");
	else if (n >= 0)
		printf("P\n");
}

int	main(void)
{
	ft_is_negative();
	return (0);
}
