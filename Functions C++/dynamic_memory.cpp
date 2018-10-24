#include <iostream>
using namespace std;

int	main()
{
	int	*p = new int;	// динамически выделенная память для целых чисел
	*p = 5;			// присвоение 5 по указателю в куче , по адресу

	cout << *p << endl;
	cout << "Для продолжения нажмите на Enter...";
	getchar();
	return (0);
}
