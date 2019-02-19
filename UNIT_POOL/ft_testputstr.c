#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int i;
	
	i = 9;
	while (9 >= 0)
	{
		ft_putchar(i + '0');
		i--;
	}
	ft_putchar('\n');
	return (0);
}
