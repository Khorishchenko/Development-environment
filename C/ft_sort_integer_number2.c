#include <stdio.h>

// Доработать программу !!!

void	ft_sort_integer_table(int *numbers, int size)
{
	int index;
	int TEMP;
    
	for (int integ = 1; integ < size; integ++)
	{
		index = integ;
		while (numbers[index] < numbers[index - 1] && index > 0)
		{
			TEMP = numbers[index - 1];
			numbers[index - 1] = numbers[index];
			numbers[index] = TEMP;
			index--;
		}
	}
}

int	main(void)
{
	int	size = 10;
	int	tab[10];
	int y = 1;
// Вариант №1
/*
	printf("Print num: ");
	scanf("%d%*c%d%*c%d%*c%d%*c%d%*c%d%*c%d%*c%d%*c%d%*c%d", &tab[0], &tab[1], &tab[2], &tab[3], &tab[4], &tab[5], &tab[6], &tab[7], &tab[8], &tab[9]);
 */

// Вариант № 2
	printf("PRINT 10 NUMBERS!!!\n\n");
	for (int i = 0; i < 10;i++)
	{
		printf("integer[№%d] = ", y++);
		scanf("%d", &tab[i]);
	}
//	while (tab[size] != '\0')
//		size++;
	printf("\n");
	ft_sort_integer_table(tab, size);
	for (int index = 0; index < size;index++)
		printf("RESULT = %d\n", tab[index]);
	return (0);
}
