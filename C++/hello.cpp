#include <iostream>
using namespace std;

int	main(void)
{
	char	a;
	char	b;

	a = 'a';
	b = 'B';
	while (a <= 'y' && b <= 'Z')
	{
		cout << a << b;
		a = (a + 2);
		b = (b +2);
	}
	cout << "\n";
	return (0);
}
