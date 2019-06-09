#include <ctype.h>
#include <stdio.h>

int main(void)
{
	char	szVar[10];
	int	nVar = 0;

	printf("What is your name: ");
	scanf("%10s", szVar);

	while (szVar[nVar] != '\0')
		nVar++;
	for (int i = 0; i < nVar; i++)
		printf("%c", toupper(szVar[i]));
	printf("\n");
	return (0);
}
