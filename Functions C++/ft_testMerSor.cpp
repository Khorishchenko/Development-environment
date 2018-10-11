#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

void	base_output();
void	MergeSort();

int	main()
{
	int	nRezh = 0;	

	do
	{
		system("cls");					//Не працююэ
		const int NotUsed = system("color 03");		// не працюэ
    
		cout << "Выберите действие:\n";
		cout << "1.Показать базу контактов.\n";
		cout << "2.Сортировка по алфавиту.(слиянием)\n";
		cout << "3.Выйти из программы.\n";
		cin >> nRezh;
    
		switch (nRezh)
		{
			case 1:
			{
				base_output();
				break;
			}
			case 2:
			{
				MergeSort();
				break;
			}
		}
	}
	while (nRezh != 3);
    
	system("cls");
	system("pause");
	return 0;
}

void    base_output()
{
    cout << "Hello" << endl;
}

void    MergeSort()
{
    cout << "Sort" << endl;
}


