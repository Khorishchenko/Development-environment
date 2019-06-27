#include <stdio.h>
#include <string.h>

int Search_Binary (int arr[], int left, int right, int key)
{
    int midd = 0;

    while (1)
    {
        midd = (left + right) / 2;

        if (key < arr[midd])       // если искомое меньше значения в ячейке
            right = midd - 1;      // смещаем правую границу поиска
        else if (key > arr[midd])  // если искомое больше значения в ячейке
            left = midd + 1;    // смещаем левую границу поиска
        else                       // иначе (значения равны)
            return midd;           // функция возвращает индекс ячейки

        if (left > right)          // если границы сомкнулись
            return -1;
    }
}

int main() {
	const int   SIZE = 12;
    int     array[SIZE] = {};
    int     key = 0;
    int     index = 0;      // индекс ячейки с искомым значением

    for (int i = 0; i < SIZE; i++)      // заполняем и показываем массив
    {
        array[i] = i + 1;
        printf("%d | ", array[i]);
    }

    printf("\n\nВведите любое число: ");
    scanf("%d", &key);

    index = Search_Binary (array, 0, SIZE, key);

    if (index >= 0)
        printf("Указанное число находится в ячейке с индексом: %d\n\n", index);
    else
        printf("В массиве нет такого числа!\n\n");

    return 0;

}
