#include <stdio.h>
#include <unistd.h>

int mx_strlen(const char *s);
void mx_printstr(const char *s);
void mx_is_positive(int i);

int main(void)
{
	int x = 0;
	mx_is_positive(x);
	return 0;
}

void mx_is_positive(int i)
{
	char poz[] = "positive";
	char neg[] = "negative";
	char zer[] = "zero";
	
	if (i > 0)
		mx_printstr(poz);
	else if (i < 0)
		mx_printstr(neg);
	else 
		mx_printstr(zer);
}		
