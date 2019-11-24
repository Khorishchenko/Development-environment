#include "libmx.h"

int mx_read_line(char **lineptr, int buf_size, char delim, const int fd) {
    static char *remainder = NULL;
    if (fd < 0) return -1;
    char *buf_str = mx_strnew(buf_size);
    char *cur_str = NULL;
    if (remainder != NULL) {
        cur_str = mx_strdup(remainder);
        free(remainder);
        remainder = NULL;
    }
    else cur_str = mx_strnew(0);
    int num_of_read_bytes = mx_strlen(cur_str);
    int res;
    while ((res = read(fd, buf_str, buf_size)) > 0) {
        int index = mx_get_char_index(buf_str, delim);
        int len = index != -1 ? index : res;
        buf_str[len] = '\0';
        char *tmp_str = cur_str;
        cur_str = mx_strjoin(cur_str, buf_str);
        free(tmp_str);
        num_of_read_bytes += len;
        if (index != -1) {
            if (remainder != NULL) // I added this to avoid mem leaks
                free(remainder);
            remainder = mx_strdup(&buf_str[index + 1]);
        }
        if (res < buf_size || index != -1) break;
    }
    *lineptr = cur_str;
    free(buf_str);
    if (res < 0) return -1;

    return num_of_read_bytes;
}

