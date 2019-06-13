#include <stdio.h>
#include <stdbool.h>

bool mx_islower(int i);
bool mx_isupper(int c);
int  mx_tolower(int i);
int  mx_toupper(int c);
void mx_reverse_case(char *s);


int main(void)
{
	char str[] = "HeLLO Neo!";
	mx_reverse_case(str);
	printf("%s\n", str);
	return 0;
}

void mx_reverse_case(char *s)
{
	int i = 0;
	while (s[i] != '\0')
  	{
		if (mx_islower(s[i]))
			s[i] = mx_toupper(s[i]);
		else if (mx_isupper(s[i]))
			s[i] = mx_tolower(s[i]);
		i++;
	}

}
