#include <iostream>
using namespace std;

int	main()
{
	int *p = NULL;				// Указатель инициализирован нулевым
	p = new int[5]; 			// Запросить память
	*p = 122;
	cout << *p << endl;

	delete []p;				// удалить указатель массива на p

	cout << "Для продолжения нажмите на Enter...";
	getchar();
	return (0);
}
