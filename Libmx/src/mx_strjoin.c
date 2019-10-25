#include "libmx.h"

char    *mx_strjoin(char const *s1, char const *s2)
{
	char	*mem;
	size_t	size;

	if (s1 && s2)
	{
		size = mx_strlen(s1) + mx_strlen(s2);
		if (!(mem = (char *)malloc((size + 1) * (sizeof(char)))))
			return (NULL);
		if (mem)
		{
			mx_strcpy(mem, (char *)s1);
			mx_strcat(mem, s2);
		}
		return (mem);
	}
	return (NULL);
}
