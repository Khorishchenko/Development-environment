#include "libmx.h"

int mx_bubble_sort(char **arr, int size)
{
    if (!arr)
    {
        return 0;
    }
    int c = 0;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++) 
        {
            if (mx_strcmp(arr[j], arr[j + 1]) > 0)
            {
                c++;
                char *t = arr[j];

                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    return c;
}

