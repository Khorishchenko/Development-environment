#include <stdio.h>

int	main(void)
{
	int	a[5];
	int	i;

	for (i = 0; i <= 5; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	for (i = 0; i <= 5; i++)
		printf("%d\n", a[i]);
	getchar(); getchar();
	return (0);
}
