#include <unistd.h>

int mx_strlen(const char *s);
void mx_printchar(char c);

void mx_printstr(const char *s)
{
	for (int i = 0; i < mx_strlen(s); i++)
	{
		mx_printchar(s[i]);
	}
	mx_printchar('\n');
}
