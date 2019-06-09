#include <stdio.h>
#include <string.h>
//#include <stdin.h>

int	main(void)
{
	char	szStr[10];

	printf("Name: ");
	scanf("%10s", szStr);
	for (int i = 0, n = strlen(szStr); i < n ; i++ )
	{
		printf("%c\n", szStr[i]);
	}
	return (0);
}
