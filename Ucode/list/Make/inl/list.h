#ifndef LIST
#define LIST

#include <stdio.h>
#include <unistd.h>

void mx_printchar(char c) {
	write(1, &c, 1);
}

void mx_printname(char *str) {
	int i = 0;
	int x = 0;
	char arr[] = "hohoho... ";
	while (arr[x] != '\0') {
		mx_printchar(arr[x]);
		usleep(90000);
		x++;
	}
	while (str[i] != '\0') {
		mx_printchar(str[i]);
		usleep(90000);
		i++;
	}
	mx_printchar('\n');
}

void mx_printname2(char *str) {
	int i = 0;
	int x = 0;
	char arr[] = "Nice to met you... ";
	while (arr[i] != '\0') {
		mx_printchar(arr[i]);
		usleep(90000);
		i++;
	}
	while (str[x] != '\0') {
		mx_printchar(str[x]);
		usleep(90000);
		x++;
	}
	mx_printchar('\n');
}

#endif
