#include<stdio.h>
#include<string.h>
// int mx_strlen (const char *s);

int mx_strlen(const char *s)
{
    int i;

    i = 0;
    while (*s++ != '\0')
        i++;
    return i;
}

int mx_insertion_sort(char **arr, int size) {
    int i, j, res = 0;
    char *key;
    for(i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && mx_strlen(arr[j]) > mx_strlen(key)) {
            arr[j + 1] = arr[j];
            j = j - 1;
            res++;
        }
        arr[j + 1] = key;
    }
    return res;
}
int main() {
    char *a[] = {"65","3","5555","77777777777","666666"};
    printf("%d\n", mx_insertion_sort(a, 5));
}
