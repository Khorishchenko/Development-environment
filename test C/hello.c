#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int i;

	i = 0;
	char str[] = "Hello World";
	while	(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}

int	main(void)
{
	printf("Hello World\n");
	return (0);
}
