#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
		for (int j = 0, n = strlen(argv[i]); j < n; j++)
			printf("%c\n", argv[i][j]);
	return (0);
}
