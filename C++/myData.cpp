#include <iostream>
#include <string>
using namespace std;

class	MyClass
{
	public:
	string myData;
};

int	main()
{
	MyClass obj;
	obj.myData = "I Love C++";
	cout << obj.myData << endl;
	return (0);
}
