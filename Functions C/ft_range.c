#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *t;
	int m;

	if (min >= max)
		return (NULL);
	m = max - min - 1;
	if ((t = (int *)malloc(sizeof(int) * m)) == NULL)
		return (NULL);
	m++;
	while (m > min)
		t[m--] = m;
	return (t);
}
