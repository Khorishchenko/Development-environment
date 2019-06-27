#include <stdio.h>
#include <unistd.h>

void mx_printchar(char c);

int main(void) {
	char str[] = "Hello world";
	int i = 0;
	while (str[i] != '\0') {
		mx_printchar(str[i]);
		usleep(90000);
		i++;
	}
	mx_printchar('\n');
	return 0;
}

void mx_printchar(char c) {
	write(1, &c, 1);
}
