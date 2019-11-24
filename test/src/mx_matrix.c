#include"libmx.h"

void mx_matrix(int city, int matrix[city][city], char *argv, char *d[]) {

	char* check = mx_file_to_str(argv);

	for(int i = 0; check[i] != '\0'; i++) {
		if((check[i] > 64 && check[i] < 91) || (check[i] > 96 && check[i] < 123)) {
			int len = 0;
			for(int j = i; (check[j] > 64 && check[j] < 91) || (check[j] > 96 && check[j] < 123); j++) {
				len++;
			}
			char *a = mx_strnew(len);
			for(int j = i, index = 0; (check[j] > 64 && check[j] < 91) || (check[j] > 96 && check[j] < 123); j++, index++) {
				a[index] = check[j];
			}
			i += len + 1;
			len = 0;
			for(int j = i; (check[j] > 64 && check[j] < 91) || (check[j] > 96 && check[j] < 123); j++) {
				len++;
			}
			char *b = mx_strnew(len);
			for(int j = i, index = 0; (check[j] > 64 && check[j] < 91) || (check[j] > 96 && check[j] < 123); j++, index++) {
				b[index] = check[j];
			}
			i += len + 1;
			len = 0;
			for(int j = i; check[j] != '\n'; j++) {
				len++;
			}
			char *c = mx_strnew(len);
			for(int j = i, index = 0; check[j] > 47 && check[j] < 58; j++, index++) {
				c[index] = check[j];
			}
			int road = 0;
			for(int j = 0; j < len; j++) {
				road += (c[j] - 48) * mx_pow(10, len - j - 1);
			}
			i += len;
			int x, y;
			for(int j = 0; d[j]; j++) {
				if(mx_strcmp(a, d[j]) == 0) {
					x  = j;
				}
			}
			for(int j = 0; d[j]; j++) {
				if(mx_strcmp(b, d[j]) == 0) {
					y  = j;
				}
			}
			matrix[x][y] = road;
		}
	}
	for(int i = 0; i < city; i++) {
		for(int j = 0; j < city; j++) {
			if(matrix[j][i] != 99) {
				matrix[i][j] = matrix[j][i];
			}
		}
	}
}
