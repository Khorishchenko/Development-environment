void mx_printchar(char c);

void mx_print_alphabet(void)
{
	char x;
	char y;

	x = 'A';
	y = 'b';
	while (x <= 'Y' && y <= 'z')
	{
		mx_printchar(x);
		mx_printchar(y);
		x += 2;
		y += 2;
	}
	mx_printchar('\n');
}
