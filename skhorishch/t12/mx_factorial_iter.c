#include <unistd.h>
#include <stdio.h>

int mx_factorial_iter(int n)
{
    int	i;
    int	f;

    if (n == 1)
        return 1;
	if (n >= 2 && n <= 13)
	{
		i = 0;
		f = n;
		while (++i < n)
			f = f * (n - i);
		return (f);
	}
	else
		return (0);
}

