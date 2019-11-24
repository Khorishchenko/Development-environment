#include "libmx.h"

int mx_count_substr(const char *str, const char *sub)
{
	if (str == NULL || sub == NULL)
		return -1;

	int leb_sub = mx_strlen(sub);

	int i = 0;
	int size = 0;

	while(str[i] != '\0')
	{
		if (str[i] == sub[0])
		{
			int x = 0;
			int y = i;
			while (str[y] == sub[x])
			{
				if (x == leb_sub -1)
				{
					size += 1;
				}
				x++;
				y++;
			}
		}
		i++;
	}
	return size;
}

