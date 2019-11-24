#include "libmx.h"

int mx_get_char_index(const char *str, char c)
{
	int i = 0;

	if (!str)
		return -2;

	while(str[i] != c && str[i])
		i++;

	if (str[i] != c)
		return -1;
	return i;
}

