#include <iostream>
using namespace std;

int	main()
{
	int	y = 0;
	
	cout << "PrintN ";
	cin >> y;
	if (y <= 90)
	{
		switch (y)
		{
			case 16:
				cout << "Too young!";
				break;	
			case 42:
				cout << "Adult!";
				break;
			case 70:
				cout << "Senior!";
				break;
		}
	}
	else 
		cout << "Dead!!!";
	cout << endl;
	return (0);
}
