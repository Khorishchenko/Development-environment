#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
	int n1 =(int)big_len;
	int n2 =(int)little_len;
	char *a = (char*)big;
	char *b = (char*)little;
	for(int i = 0; i < n1; i++) {
		if(b[0] == a[i] && (i + little_len) <= big_len) {
			char *c = mx_strnew(little_len);
			for(int j = 0; j < n2; j++) {
				c[j] = a[j + i];
			}
			if(mx_strcmp(c, b) == 0) {
				return a + i;
			}
		}
	}
	return NULL;
}

