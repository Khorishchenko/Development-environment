#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int **t;
	int m;

	if (min >= max)
		return (0);
	m = max - min - 1;
	if ((t = (int **)malloc(sizeof(int) * m)) == NULL)
		return (0);
	m++;
	while (m > min)
		t[m--] = m;
	range = t;
	return (m);
}
