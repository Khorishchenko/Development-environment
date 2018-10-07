#include <stdio.h>

void	ft_rot();

int	main(int argc, char **argv)
{
	int nb;
	int i, u;
	int a, f, index;

	i = a = f = u = 0;
	index = 9;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == argv[1][index])
			{
				i = 0;
				while (argv[1][i] != '\0')
				{
					if (i == 3 && (argv[1][i] == '9'))
						a = 1;
					if (i == 6 && (argv[1][i] == '5'))
						f = 1;
					if (a == 1 && f == 1)
					{
						ft_rob();
						return (0);
					}
					i++;
				}
				if (a != 1 || f != 1)
				{
					printf("error\n");
					u = 1;
				}
			}
			i++;
		}
		if  (u == 0)
			printf("error\n");
	}
	else if (argc != 2)
		printf("error\n");
	return (0);
}
