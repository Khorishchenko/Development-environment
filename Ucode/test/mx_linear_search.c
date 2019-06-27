#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);

int mx_linear_search(char **arr, const char *s) {
	int x = 0;
	while (arr != 0)
		 {
		if (mx_strcmp(arr[x], s) == 0)
			return x;
		x++;
	}
	    return -1;
	}


int main() {
	char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z", NULL};
	printf("%d\n", mx_linear_search(arr, "z") );

}