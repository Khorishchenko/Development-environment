#include <stdlib.h>

int			jp_strlen(char *str)
{
	int l;

	l = 0;
	while (*str++ != '\0')
		l++;
	return (l);
}

char		*ft_strdup(char *src)
{
	int		i;
	char	*cpy;

	i = jp_strlen(src);
	if ((cpy = malloc(sizeof(*src) * (i + 1))) == NULL)
		return (NULL);
	while (i >= 0)
	{
		cpy[i] = src[i];
		i--;
	}
	return (cpy);
}
