#include <stdlib.h>

char    *mx_strnew(int size);
void	ft_bzero(void *s,int n);

char    *mx_strnew(int size)
{
	char	*str;

	if (size == 0)
		return (NULL);
	if ((str = (char *)malloc((size + 1) * sizeof(char))) == NULL)
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}

void	ft_bzero(void *s, int n)
{
	int				i;
	unsigned char	*tmp;

	if (n > 0)
	{
		tmp = s;
		i = 0;
		while (n > i)
		{
			tmp[i] = 0;
			i++;
		}
	}
}
