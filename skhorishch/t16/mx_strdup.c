#include <stdlib.h>
#include <stdio.h>

char *mx_strdup(char *str);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(int size); 

char *mx_strdup(char *str) { 
	
    int size = mx_strlen(str);
	char *tem = mx_strnew(size);
	tem = mx_strcpy(tem, str);
	return tem;
}


