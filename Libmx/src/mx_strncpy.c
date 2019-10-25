#include "libmx.h"

char		*mx_strncpy(char *dst, char *src, int len)
{
	char *ptr;

	ptr = dst;
	while (len > 0 && *src != '\0')
	{
		*dst++ = *src++;
		--len;
	}
	while (len > 0)
	{
		*dst = '\0';
		--len;
		++dst;
	}
	dst = ptr;
	return (dst);
}
