#include <stdio.h>
#include <unistd.h>

char *mx_strcat(char *s1, const char *s2);
int mx_strlen(const char *s);

int main(void) {
	char str[] = "Hello";
	char str1[] = "World";
	printf("%s\n",  mx_strcat(str, str1));
	return 0;
}

char *mx_strcat(char *s1, const char *s2) {
    int len1 = mx_strlen(s1);
    int len2 = mx_strlen(s2);
    for (int i = 0; i < len2; i++) {
        s1[i + len1] = s2[i];
    }
    s1[len1 + len2] = '\0';
    return s1;
}

int mx_strlen(const char *s) {
	int i = 0;
	while (s[i] != '\0')
		i++;
	return i;
}
