#include <stdio.h>

void mx_sort(int  *arr, const int size);

int main(void)
{
    int arr[] = {3, 55, -11, 1, 0, 4, 22};
    int size = 7;
    mx_sort(arr, size);
    for (int i = 0; i < size; i++)
        printf("%d", arr[i]);
    printf("\n");
    return 0;
}

void mx_sort(int *arr, const int size)
{
// сортировка булб в поряд зростання [0]-->[7] 
    if (size > 0)
    {
        for (int i = 0, y; i < size; i++){
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) 
                {
                        y = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = y;
                }
            }
        }
    }
}

/*
Сортировка булб в порядку сменш [0]<--[7]


    int	buff = 0;	                                    // для временного хранения значения, при перезаписи

 	for (int i = 0; i < size - 1; i++) 
 	{
 					                                    // вложенный цикл проходит от четвертого элемента
 				                                        // до первого, находит с помощью if самое "легкое" значение,
 					                                    // сравнивая соседние пары элементов,
 					                                    // и поднимает его в нулевую ячейку массива
 		for (int j = size - 1; j > i; j--)
 		{
 			if (arr[j] < arr[j - 1])
 			{
 				buff = arr[j - 1];
 				arr[j - 1] = arr[j];
 				arr[j] = buff;
 			}
 		}
    }
}
*/
