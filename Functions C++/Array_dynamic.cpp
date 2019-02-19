#include <iostream>
using namespace std;

int	main()
{
	int	size = 0;
	int	*dan = NULL;

	cout << "Ввести размерность массива : ";
	cin >> size;
	dan = new int[size];
	
	for (int i = 0; i < size; i++) 
	{
		cout << "dan[" << i << "] = ";
		cin >> dan[i];
	}
	for (int i = 0; i < size; i++)
		cout << dan[i] << " ";
	cout << endl;
	delete[] dan;

	cout << "Для продолжения нажмите на Enter...";
	cin.clear();
	cin.ignore();
	getchar();
	return 0;
}
