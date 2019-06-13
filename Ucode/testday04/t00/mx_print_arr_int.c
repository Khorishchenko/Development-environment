#include <stdio.h>

void mx_printchar(char c);
void mx_printint(int n);
void mx_print_arr_int(const int *arr, int size);

int main(void)
{
    const int arr[] = {1, 2, 3, 4, 5, 6, 6, 6, 6};
    int size = 9;
    mx_print_arr_int(arr, size);
    return 0;
}

void mx_print_arr_int(const int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        mx_printint(arr[i]);
        mx_printchar('\n');
    }
}
