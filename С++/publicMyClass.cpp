#include <iostream>
#include <string>
using namespace std;

class	myClass
{
	public:
		string name;
};

int	main()
{
	myClass myObj;
	myObj.name = "Sololerarn";
	cout << myObj.name << endl;
	return (0);
}
