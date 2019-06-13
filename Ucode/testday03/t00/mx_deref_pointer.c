#include <stdio.h>

void mx_deref_pointer(char ******str);

int main(void)
{
        char *str = "Hello";
        char **str2 = &str;
        char ***str3 = &str2;
        char ****str4 = &str3;
        char *****str5 = &str4;
        char ******str6 = &str5;
        mx_deref_pointer(str6);
        return 0;
}

void mx_deref_pointer(char ******str)
{
	str[0][0][0][0][0] = "Follow the white rabbit!";
	printf("%s\n",  *****str);
}	
