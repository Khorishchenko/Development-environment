#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
/*	int i;

	i = 1;*/
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
		ft_putstr(argv[argc - 1]);
	return (0);
}
