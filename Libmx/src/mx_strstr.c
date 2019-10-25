#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle)
{
    char	*temp;
	char	*temp_l;
	char	*slow_temp;

	temp = (char *)big;
	temp_l = (char *)little;
	slow_temp = temp;
	if (*little == '\0')
		return ((char *)big);
	while (*big)
	{
		if (*big == *little)
		{
			temp = (char *)big;
			while (*big++ == *little++)
				if (!(*little))
					return (temp);
		}
		big = slow_temp++;
		little = temp_l;
		++big;
	}
	return (NULL);
}
