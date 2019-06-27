#include<stdio.h>

int mx_strlen(const char *s) {
    int a = 0;
    while (s[a] != '\0')
        a++;
        return a;
}

int mx_insertion(char **arr, const int size) {
    int i;
    int j;
    int res = 0;
    char *key;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && mx_strlen(arr[j]) > mx_strlen(key)) {
            arr[j + 1] = arr[j];
            j = j - 1;
            res++;
        }
        arr[j + 1] = key;
    }
    return res;
}

int main() {
    char *a[] = {"4jdfdkf", "6dfjd", "dhgdhjgdjgfdj", "gydgdg"};
    printf("%d\n", mx_insertion(a, 4));
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < mx_strlen(a[i]); j++) {
            printf("%c", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
