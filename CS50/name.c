#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

const int COUNT = 10;

int main(void)
{
	char	name[COUNT];

	printf("What is ypur name: ");
	scanf("%9s", name);
	printf("Hello %s\n", name);

	return (0);
}
