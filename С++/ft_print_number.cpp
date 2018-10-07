#include <iostream>
using namespace std;

void	print_number(void);
void	print(char c);

int	main(void)
{
	print_number();
	return (0);
}

void	print_number(void)
{
	char	nb;

	nb = '0';
	while (nb <= '9')
	{
		print(nb);
		nb++;
	}
	cout << endl;
}

void	print(char c)
{
	cout << c;
}
