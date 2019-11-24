#include "libmx.h"

void mx_gram(char *str, char *argv)
{
	char *integer;
	int i = 0;

	for (int y = 0; str[y] != '\n'; y++) 
	{
		integer = &str[y];
	}

	int a = mx_atoi(integer);

	while (str[i] != '\0')
	{
		if (((str[i] == '-') || (str[i] == ',') || (str[i] == '\n') 
			|| (str[i] >= 48 && str[i] <= 57))) {
				str[i] = ' ';
			}
			i++;
	}

	int size = 0; 
	int cout = 0;
	while (str[cout] != '\0')
	{
		if (((str[cout] >= 'A' && str[cout] <= 'Z') || 
			(str[cout] >= 'a' && str[cout] <= 'z')) && str[cout + 1] == ' ' 
			&& ((str[cout + 2] >= 'A' && str[cout + 2] <= 'Z') || 
			(str[cout + 2] >= 'a' && str[cout + 2] <= 'z')))
				size++;
		if (((str[cout] >= 'A' && str[cout] <= 'Z') || 
			(str[cout] >= 'a' && str[cout] <= 'z')) && str[cout + 1] == ' ' 
			&& str[cout + 2] == ' ')
				size++;
		cout++;
	}

	char *stroca[size];

	int r = 0;
 	for (int t = 0; str[t] != '\0'; t++)
 	{
  		if ((str[t] > 64 && str[t] < 91) || (str[t] > 97 && str[t] < 123))
  		{
   			int y = 0;
   			int j = 0;
   			for (j = t; str[j] != ' '; ++j,y++)
   				;
   			stroca[r] = mx_strnew(y);
   			y = 0;
   			for (j = t; str[j] != ' '; ++j,y++){
    		stroca[r][y] = str[j];
			}
   			r++;
   			t = t + y; 
  		}
 	}

 	int len = size;

 	for (int t = 0; t < size; t++) {
 		for (int s = t + 1; s < size; s++) {
 			if (mx_strcmp(stroca[t], stroca[s]) == 0) {
 				free(stroca[t]);
 				stroca[t] = mx_strnew(4);
 				stroca[t] = "free";
 				len--;
 			}
 		}
 	}


 	if (a != len) {
		mx_printstr("error: invalid number of islands");
		exit(1);
	}

 	char *stroka_2[len];
 	int size_2 = 0;
 	char str_2[] = "free";

 	for (int t = 0; t < size; t++)
 	{
 		if (mx_strcmp(stroca[t], str_2) != 0)
 		{
 			stroka_2[size_2] = stroca[t];
 			size_2++;
 		}
 	}

 	for (int j = 0; j < len; j++) {
 		for (int x = 0; stroka_2[j][x] != '\0'; x++) {
 			mx_printchar(stroka_2[j][x]);
 		}
 		mx_printchar(' ');
 		mx_printchar(*mx_itoa(j));
 		mx_printchar('\n');
 	}
 	mx_printchar('\n');
 	mx_printchar('\n');

 	// MATRIX !!!

 	int mmatrix[len][len];

	for (int i = 0; i < len; i++) {
		for (int y = 0; y < len; y++)
		{
			mmatrix[i][y] = 99;
		}
	}

	for (int i = 0; i < len; i++) {
		for (int y = 0; y < len; y++)
		{
			printf("%d ", mmatrix[i][y]);
		}
		printf("\n");
	}

	mx_matrix(len, mmatrix, argv, stroka_2);


	// for (int i = 0; i < len; i++) {
	// 	for (int y = 0; y < len; y++)
	// 	{
	// 		printf("%d ", mmatrix[i][y]);
	// 	}
	// 	printf("\n");
	// }
 }


