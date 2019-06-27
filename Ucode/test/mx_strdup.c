#include <stdlib.h>
#include <stdio.h>

char *mx_strdup(char *str);

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
	while (str[size] != '\0')
		size++;
	tem = (char*)malloc(size + 1);
	for (int i = 0; i <= size; i++)
		tem[i] = str[i];
	return tem;
}
