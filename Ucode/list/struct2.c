#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	struct month xxx;

	printf("Who are you?: ");
	scanf("%s", xxx.name);
	
	do
	{
		printf("what's the month now? name and day:  ");
		scanf("%s", xxx.month);
		printf("Enter number a month: ");
		scanf("%d", &xxx.day);
	}
	while (xxx.day != 22);
	
	printf("Ok! What do you see?: \n");

	for (int i = 0; i < 30; i++){
		for (int j = 0; j < 20; j++) {
			printf("10");
		}
		printf("\n");
	}
	
	char str[] = "Binar";

	do
	{
		printf("What do you see?: ");
		scanf("%s", xxx.name);
	}
	while (strcmp(xxx.name, str) != 0);

	return 0;
}
