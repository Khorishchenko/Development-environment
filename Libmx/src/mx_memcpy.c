#include "libmx.h"

void    *mx_memcpy(void *restrict dst, const void *src, size_t n)
{
	unsigned char	*temp;

	temp = dst;
	while (n--)
		*temp++ = *(unsigned char *)src++;
	return (dst);
}
