#include <unistd.h>
#include <stdio.h>   //  только для  printf.

// 1  программа с использованием ft_putchar!!!

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr(nbr *= -1);
	}
	else if (nbr < 10)
	{
		ft_putchar(nbr + 48);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + 48);
	}
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
	ft_putnbr(*nbr);
}

int	main(void)
{
	int nbr;
	
	nbr = 0;
	ft_ft(&nbr);
	ft_putchar('\n'); 
	return (0);
}

// 2  второй вариант программы с использованием  printf!!!

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int nbr;
	
	nbr = 0;
	ft_ft(&nbr);
	printf("%d\n", nbr);
	return (0);
}
