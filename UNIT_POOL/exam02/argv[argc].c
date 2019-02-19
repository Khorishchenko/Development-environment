#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int a;

	a = 1;
	while (argc > a)
	{
		while (*argv[a] != '\0')
			ft_putchar(*argv[a]++);
		ft_putchar('\n');
		a++;
	}
	return (0);
} 
