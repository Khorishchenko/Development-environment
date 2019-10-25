#include "libmx.h"

void		*mx_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;

	temp = b;
	while (len--)
		*(unsigned char *)temp++ = (unsigned char)c;
	return (b);
}
