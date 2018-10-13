#include <iostream>
using namespace std;

void	ft_putchar(int c)
{
	cout << c << endl;
}

int	main(void)
{
	int	i;

	i = 9;
	while (i >= 0)
	{
		ft_putchar(i);
		i--;
	}
//	cout << endl;
	return (0);
}
