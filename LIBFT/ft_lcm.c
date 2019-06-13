#include "libft.h"

int	ft_lcm(unsigned int a, unsigned int b)
{
	int	lcm;

	if (ft_gcf(a, b) == 0)
		return (0);
	lcm = (a * b) / ft_gcf(a, b);
		return (lcm);
}
