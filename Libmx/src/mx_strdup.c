#include "libmx.h"

char		*mx_strdup(const char *s1)
{
	char		*dup;
	char		*temp;
	size_t		len;

	len = 0;
	while (s1[len])
		++len;
	dup = (char*)malloc((len + 1));
	if (!dup)
		return (NULL);
	temp = dup;
	while (*s1)
		*temp++ = *s1++;
	*temp = '\0';
	return (dup);
}
