#include "libmx.h"

void    *mx_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)s;
	while (n--)
	{
		if (*temp == ((unsigned char)c))
			return (temp);
		++temp;
	}
	return (NULL);
}
