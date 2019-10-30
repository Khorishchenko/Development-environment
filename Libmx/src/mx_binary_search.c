#include "libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count)
{
    int start = 0;
    int end = size-1;
    int mid;
    while (start <= end) 
    {
        mid = start + (end - start) / 2;
        if (mx_strcmp(arr[mid], s) < 0) 
        {
                *count += 1;
                start = mid + 1;
        }
        else if (mx_strcmp(arr[mid], s) > 0)
        {
            *count += 1;
            end = mid - 1;
        }
        else if (mx_strcmp(arr[mid], s) == 0){
            *count += 1;
            return mid;
        }
        //*count += 1;
    }    
    *count = 0;
    return -1;
}

