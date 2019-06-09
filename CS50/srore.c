#include <stdio.h>

const int COUNT = 3;

void chart(int sroce);

int main(void)
{
	//get scores from user
	int	scores[COUNT];

	for (int i = 0; i < COUNT; i++)
	{
		printf("Srore[%i]: ", i + 1);
		scanf("%d", &scores[i]);
	}
	
	for (int i = 0; i < COUNT; i++)
	{
		printf("Score[%i]: ", i + 1);
		chart(scores[i]);
	}
	return (0);
}

void chart(int score)
{
	for (int i = 0; i < score; i++)
	{
		printf("*");
	}
	printf("\n");
}
