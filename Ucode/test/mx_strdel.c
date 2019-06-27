#include <stdio.h>
#include <stdlib.h>

void mx_strdel(char **str) { //принимает указатель на строку
    free(*str);              //освобождает строку памяти
    *str = NULL;	         // устанавливает строку в 0
}