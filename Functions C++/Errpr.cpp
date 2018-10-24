#include <iostream>
#include <string>
using namespace std;

int	main()
{
	int	x = 0;
	char	str[10];
	
	cin >> x;
	cout << x;	

	cout << "Enter Name";
	cin.get(str, 10);
	cout << "Hello" << str <<endl;
	return (0);
}
