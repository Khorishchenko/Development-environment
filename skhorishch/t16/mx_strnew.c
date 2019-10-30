#include <stdlib.h>
#include <stdio.h>

char    *mx_strnew(int size)
{
	char	*str;
	

	if (size == 0)
		return (NULL);
	str = (char *)malloc((size + 1));
	
	for (int i = 0; i < size + 1; i++)
		str[i] = '\0';

	return str;
}


