#include "libmx.h"

char *mx_strndup(const char *s1, size_t n)
{
	char *tem = mx_strnew(n);
	unsigned long int i;
	for ( i = 0; i < n; i++)
	{
		tem[i] = s1[i];
	}
	tem[i] = '\0';
	return tem;
}

