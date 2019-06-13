#include <stdio.h>
#include <stdbool.h>

bool mx_isspace(char c);

int main(void)
{
	char str = 'A';
	printf("%d\n", mx_isspace(str));
	return 0;
}

bool mx_isspace(char c)
{
	if ( c == '\t' || c == ' ' || c == '\n' 
			|| c == '\v' || c == '\f' || c == '\r' )
		return true;
	else
		return false;
}
