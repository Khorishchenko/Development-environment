#include <iostream>
using namespace std;

int	main()
{
	int	*p = new int;		// запрашивать память в куче
	*p = 5;			// хранить ценность по адресу в куче

	cout << *p << endl;
	
	delete p;		// освободить память
	
	p = new int;		// повторное использование для нового адреса
	
	cout << "Для продолжения нажмите на Enter...";
	getchar();
	return (0);	
}
