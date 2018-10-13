#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
        {
                ft_putchar('-');
                ft_putchar('2');
                ft_putnbr(147483648);
        }
        else if (nb < 0)
        {
                ft_putchar('-');
                ft_putnbr(nb *= -1);
        }
        else if (nb < 10)
        {
                ft_putchar(nb + 48);
        }
        else
        {
                ft_putnbr(nb / 10);
                ft_putchar(nb % 10 + 48);
        }
}

int	main(void)
{
	int h;
	
	scanf("%i", &h);
	ft_putnbr(h);
	ft_putchar('\n');
	return (0);
}
