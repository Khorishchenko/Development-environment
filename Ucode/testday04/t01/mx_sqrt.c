#include <stdio.h>

int mx_sqrt(int x);

int main(void)
{
    int i = 16;
    printf("%d\n", mx_sqrt(i));
    return 0;
}

int mx_sqrt(int x)
{
	int racine;
	int sqrt;

	racine = 1;
	sqrt = 0;
	while (racine <= x / 2)
	{
		sqrt = racine * racine;
		if (sqrt == x)
		{
			return (racine);
		}
		racine = racine + 1;
	}
	return (0);
}
