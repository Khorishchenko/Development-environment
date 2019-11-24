#include "libmx.h"

void mx_print_strarr(char **arr, const char *delim)
{
	
		for (int i = 0; arr[i] != NULL; i++)
		{
			for (int j = 0; arr[i][j] != '\0'; j++)
				write(1, &arr[i][j], 1);
			if (arr[i + 1] != NULL)
			{
				for (int s = 0; delim[s] != '\0'; s++)
					write(1, &delim[i], 1);
			}
		}
		write(1, "\n", 1);
}

