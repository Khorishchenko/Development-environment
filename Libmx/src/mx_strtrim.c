#include "libmx.h"

static int	whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

char		*mx_strtrim(const char *str)
{
    char	*mem;
	int		size;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (!str)
		return (NULL);
	size = (int)mx_strlen(str);
	if (!(mem = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	if (*str)
	{
		while (whitespace(str[j]) == 1)
			++j;
		while (whitespace(str[size - 1]) == 1 && (j != size))
			--size;
		while (++i < (size - j))
			mem[i] = str[j + i];
	}
	mem[i] = '\0';
	return (mem);
}

