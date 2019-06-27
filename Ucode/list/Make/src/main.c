#include "list.h"

#include <stdio.h>

int main(void) {
	char str1[] = "What is your name? : ";
	char str[] = "Hello my friend!...";
	int i = 0;
	int x = 0;
	
	printf("|-------------------|\n"
	       "|        ||         |\n"
	       "|      --**--       |\n"
		   "|        ||         |\n"
		   "|                   |\n"
		   "|      (*|*)        |\n"
		   "|        |          |\n"
		   "|      /   \\        |\n"
		   "|                   |\n"
		   "|___________________|\n");

	while (str[i] != '\0') {
		mx_printchar(str[i]);
		usleep(90000);
		i++;
	}
	mx_printchar('\n');
	while (str1[x] != '\0') {
		mx_printchar(str1[x]);
		usleep(90000);
		x++;
	}
	scanf("%s", str);
	mx_printname(str);
	mx_printname2(str);
	return 0;
}
