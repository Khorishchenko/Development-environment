#include <stdio.h>

int	main(void)
{
	int i;

	const char *p = "Hello";
	for (i = 0; p[i] != '\0'; i++)
		printf("%s\n", p);
	return (0);
}
