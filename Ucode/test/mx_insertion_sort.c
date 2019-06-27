#include<stdio.h>
#include<string.h>
int mx_strlen(const char *s);

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
    char *a[] = {"12aaaaaaaaaa", "11aaaaaaaaa", "13aaaaaaaaaaa", "5aaaa", "6aaaaa"};
    printf("%d", mx_insertion_sort(a, 5));
}
