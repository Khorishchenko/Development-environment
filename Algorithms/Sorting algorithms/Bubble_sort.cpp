#include <iostream>
using namespace std;
 
			// прототип функции, которая выполнит сортировку "пузырьком"
void	bubbleSort(int arrForSort[], const int SIZE); 
 
int	main()
{ 
	setlocale(LC_ALL, "rus");
	const int	SIZE = 5;
 	int		arr[SIZE];
 
 	cout << "Исходный массив:\n";
 	for (int i = 0; i < SIZE; i++)
 	{
 		arr[i] =  SIZE - i; // заполняем значениями по убыванию
 		cout << arr[i] << "\n__\n";
 	}
 	cout << "\n\n";
 
 	bubbleSort(arr, SIZE);  // передаем в функцию для сортировки
 
 	cout << "Массив после сортировки:\n";
 	for (int i = 0; i < SIZE; i++)
 	{
 		cout << arr[i] << "\n__\n";
 	}
 	cout << "\n\n";
	return (0);
}
 
void	bubbleSort(int arrForSort[], const int SIZE)
{
	int	buff = 0;	// для временного хранения значения, при перезаписи
 
 	for (int i = 0; i < SIZE - 1; i++) // 
 	{
 					// вложенный цикл проходит от четвертого элемента 
 				       // до первого, находит с помощью if самое "легкое" значение,
 					// сравнивая соседние пары элементов,
 					// и поднимает его в нулевую ячейку массива
 		for (int j = SIZE - 1; j > i; j--) 
 		{
 			if (arrForSort[j] < arrForSort[j - 1])
 			{
 				buff = arrForSort[j - 1];
 				arrForSort[j - 1] = arrForSort[j];
 				arrForSort[j] = buff;
 			}
 		}
 					// далее значение i увеличивается на 1
 					// и внутренний цикл будет перебирать элементы 
 					// от четвертого до второго. Таким образом поднимет самое
 					// "легкое" значение из оставшихся  в первую ячейку и т.д.
 	}
}
