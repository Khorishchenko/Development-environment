#include <stdlib.h>
#include <stdio.h>

char *mx_strdup(char *str);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(int size); 

int main(void) {
	char str[] = "helloworld";
	char *str1;
	str1 = mx_strdup(str);
	printf("%s\n", str1);
	free(str1);
	str1 = NULL;
	return 0;
}

char *mx_strdup(char *str) { 
	int size = 0;
	char *tem;
    size = mx_strlen(str);
	tem = mx_strnew(size);
	tem = mx_strcpy(tem, str);
	return tem;
}
