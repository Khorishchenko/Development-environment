#include <stdio.h>

void mx_hexadecimal(void);
void mx_printchar(char c);

int main(void)
{
	mx_hexadecimal();
	return 0;
}

void mx_hexadecimal(void)
{
	for (int i = 0x30; i <= 0x39 ; i++)
		mx_printchar(i);
	for (int i = 0x41; i <= 0x46; i++)
		mx_printchar(i);
	mx_printchar('\n');
}	
