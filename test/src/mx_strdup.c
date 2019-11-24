#include "libmx.h"

char		*mx_strdup(const char *s1)
{
	int size = mx_strlen(s1);
	char *tem = mx_strnew(size);
	tem = mx_strcpy(tem, s1);
	return tem;
}
