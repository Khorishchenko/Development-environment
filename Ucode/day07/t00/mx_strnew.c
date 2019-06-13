#include <stdlib.h>

char    *mx_strnew(int size);
void	ft_bzero(void *s,int n);

char    *mx_strnew(int size)
{
	char	*str;
    char    *dest;

	if (size == 0)
		return (NULL);
	if ((str = (char *)malloc((size + 1) * sizeof(char))) == NULL)
		return (NULL);
    dest = str;
    free(str);
	ft_bzero(dest, size + 1);
	return (dest);
}

void	ft_bzero(void *s, int n)
{
	int	    i;
	char	*tmp;

	if (n > 0){
		tmp = s;
		i = 0;
		while (n > i){
			tmp[i] = 0;
			i++;
		}
	}
}
