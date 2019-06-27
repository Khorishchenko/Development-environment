#include <stdlib.h>
#include <stdio.h>

char    *mx_strnew(int size);
void	ft_bzero(void *s,int n);

int main(void)
{
    int size = 10;
    printf("%s\n", mx_strnew(size));
    return 0;
}

char    *mx_strnew(int size)
{
	char	*str;
	char	*tem;

	if (size == 0)
		return (NULL);
	str = (char *)malloc((size + 1));
	tem = str;
	for (int i = 0; i < size + 1; i++)
		tem[i] = 0;
	free(str);
	return (tem);
}