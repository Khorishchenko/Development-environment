#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace)
{
	if (str == NULL || sub == NULL || replace == NULL)
			return NULL;

	int size1 = mx_strlen(str);
	char *str1 = mx_strnew(size1);
	for (int i = 0; i < size1; i++)
	{
		str1[i] = str[i];
	}
	int size2 = mx_strlen(replace);
	char *str2 = mx_strnew(size2);
	for (int i = 0; i < size2; i++)
	{
		str2[i] = replace[i];
	}

	int size = 0;
	while (str1[size] != '\0')
	{
		if (str1[size] == sub[0])
		{
			int x = 0;
			int len = 0;
			int y = size;
			while (str1[y] == sub[x])
			{
				str1[y] = str2[len];
				y++;
				x++;
				len++;
			}

		}
		size++;
	}
	char *hex = mx_strnew(size1);

	for (int i = 0; i < size1; i++)
	{
		hex[i] = str1[i];
	}
	return hex;
}

