#include <unistd.h>
void	ft_putchar(char c);

int	main(void)
{
	int	x;

	x = 0;
	char str[] = "Hello";
	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
	ft_putchar('\n');
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


