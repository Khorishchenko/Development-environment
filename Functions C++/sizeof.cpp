#include <iostream>
using namespace std;

int	main()
{
	cout << "char: " << sizeof(char) << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "Float: " << sizeof(float) << endl;
	cout << "double: " << sizeof(double) << endl;
	
	unsigned int	var = 50;
	
	cout << "var: " << sizeof(var) << endl;
	cout << "Для продолжения нажмите на Enter...";
	getchar();
	return (0);
}
