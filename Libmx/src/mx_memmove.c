#include "libmx.h"

void    *mx_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*s;
	unsigned char		*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (dst > src)
	{
		s += len - 1;
		d += len - 1;
		while (len--)
			*d-- = *s--;
	}
	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dst);
}
