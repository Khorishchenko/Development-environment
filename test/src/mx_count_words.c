#include "libmx.h"

int mx_count_words(const char *str, char c)
{
	if (str == NULL || c == '\0')
		return -1;
	int y = 0;
	int i = 0;
	while(str[i] == c)
		i++;
	for (int n = mx_strlen(str); i < n; i++)
	{
		if ((str[i] == c && str[i + 1] != c))
		{
			y++;
		}
	}
	return y;
}

