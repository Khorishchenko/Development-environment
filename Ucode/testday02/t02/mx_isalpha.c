#include <stdio.h>
#include <stdbool.h>

bool mx_isalpha(int c);

int main(void)
{
	int i = 65;	
	char str = 'z';
	printf("%d\n", mx_isalpha(i));
	return 0;
}

bool mx_isalpha(int c)
{
	if (( c >= 65 && c <= 90 ) || ( c >= 97 && c <= 122 ))
		return true;
	else
		return false;
}
