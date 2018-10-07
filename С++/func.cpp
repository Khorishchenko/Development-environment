#include <iostream>
using namespace std;

int	timeTwo(int x);

int	main(void)
{
	int	x = 0;

	cout << "PrintN: ";
	cin >> x ;
	cout << timeTwo(x) << endl;
	return (0);
}

int	timeTwo(int x)
{
	return (x*2);
}
