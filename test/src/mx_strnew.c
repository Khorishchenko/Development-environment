#include "libmx.h"

char    *mx_strnew(const int size)
{
	if (size > 0)
	{
		char *str = (char *)malloc(sizeof(char) * size + 1);

		for (int i = 0; i < size + 1; i++)
			str[i] = '\0';

		return str;
	}
	if (size < 0)
	{
		return NULL;
	}
	if (size == 0) 
	{
		char *str1 = (char *)malloc(sizeof(char) * size);
		return str1;
	}
	return NULL;
}
