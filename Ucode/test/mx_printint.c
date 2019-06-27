#include <stdio.h>
#include <unistd.h>

void mx_printchar(char c);
void mx_printint(int s);


int main(void) {
	mx_printint(-8);
	mx_printchar('\n');
	return 0;
}
void mx_printint(int s) {
	long int m = s;
	if (m < 0) {
		mx_printchar('-');
		m *= -1;
	}
	if (m >= 0 && m <= 9) {
		mx_printchar(m + 48);
	}
	else {
		mx_printint(m / 10);
		mx_printchar(m % 10 + 48);
	}
}
void mx_printchar(char c) {
	write(1, &c, 1);
}
