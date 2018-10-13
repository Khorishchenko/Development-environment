#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_excess(char **argv)
{
	int i = 0;
	int o = 1;

	while (argv[1][i+1] != '\0') // пока не конец строки
	{
    		if (argv[1][i] == argv[1][i + 1]) // если текущий похож на следующий
             		for (int x = 0;(x < 256 && argv[1][x] != '\0');x++) 
                       		argv[1][i + x + 1] = argv[1][i + x + 2]; // удаляем следующий
		else
			i++; // если не похож переходим на него
	}
	return (0);
}


int     ft_verif_char(char *str, char c, int index)
{
        int     i;

        i = 0;
        while (i < index)
        {
                if (str[i] == c)
                        return (0);
                i++;
        }
        return (1);
}		
void	ft_test(char **argv)
{
	int i = 0; 
	int j = 0; 
	int a = 0;

	while (argv[1][i] != '\0') 
	{
	 	if (ft_verif_char(argv[1], argv[1][i], i) == 1)	
		{
			while (argv[2][a] != '\0' && j != 1) 
			{
				if (argv[1][i] == argv[2][a]) 
				{
					ft_putchar(argv[1][i]); 
					j = 1;
				}
				else 
					a++;
			}
		}
		i++;
		a = j = 0;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	
	if (argc != 3)
		printf("error\n");
	else
//	{
//		ft_excess(argv);
		ft_test(argv);
//	}
	return (0);
}	
