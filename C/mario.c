#include <stdio.h>

int	main(void)
{
	int	h;
    				//Узнаем высоту
	do
	{
		printf("Height: ");
		scanf("%d", &h);
	}
	while (h < 0 && h > 60);
		;	
	for (int i = 1; i <= h; i++)
    	{
        	for (int s = 0; s < h - i; s++)   //пробелы в строке
        	{
        		printf(" ");
        	}
        	for (int r = 0; r < i-1; r++)       //решеточки в линии, кроме одной
        	{
          		printf("#");
        	}
    		printf("#\n");                        //последняя решеточка с переносом строки
    	}
} 
