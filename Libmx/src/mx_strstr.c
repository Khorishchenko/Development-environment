#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle)
{
    char	*temp;
	char	*temp_l;
	char	*slow_temp;

	temp = (char *)haystack;
	temp_l = (char *)needle;
	slow_temp = temp;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			temp = (char *)haystack;
			while (*haystack++ == *needle++)
				if (!(*needle))
					return (temp);
		}
		haystack = slow_temp++;
		needle = temp_l;
		++haystack;
	}
	return (NULL);
}
