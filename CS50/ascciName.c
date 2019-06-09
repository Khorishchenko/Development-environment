#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int	nInt = 0;
	char	szStr[10];

	printf("What is your name: ");
	scanf("%10s", szStr);

	while (szStr[nInt] != '\0')
		nInt++;
	for (int i = 0; i < nInt; i++)
	{
		int j = (int) szStr[i];	
	// переведення з одного тіпу данних в інший! Явний)
		printf("%c %i\n", szStr[i], j); 
	  // or printf("%c %i\n", szStr[i], szStr[i]); Не Явний!
	}
	return (0);
}	
