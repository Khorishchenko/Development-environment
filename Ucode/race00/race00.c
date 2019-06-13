#include <stdio.h>

void mx_printchar(char c);
void mx_printstr(const char *s);

static void high_part(int map_length) {
    if (map_length == 1) mx_printstr("<=>");
    else if (map_length == 2) mx_printstr("<==>");
    else if (map_length == 3) mx_printstr("<=-=>");
    else for(int i = 0; i < map_length; i++) {
        if (i == 0) mx_printchar('<');
        else if (i == map_length - 1) mx_printchar('>');
        else if (i == 1 || i == map_length - 2) mx_printchar('=');
        else mx_printchar('-');
    }
    mx_printchar('\n');
}

static void array_part(int map_length, int map_width, int one_y, int one_x) {
    for (int i = 0; i < map_width; i++) {
        for (int j = 0; j < map_length; j++) {
            if (i % 2 == 0 && 
                    (j == 0 || j == map_length - 1)) mx_printchar('*');
            else if ((i % 2 != 0 && 
                        (j == 0 || j == map_length - 1))) mx_printchar('+');
            else if (j == one_x + 1 && i == one_y)
                mx_printchar('1');
            else mx_printchar('0');
        }
    mx_printchar('\n');
    }
}

void race00(int map_length, int map_width, int one_y, int one_x) {
    if (!(one_y >= map_width || one_x >= map_length ||
                (map_width == 0 && map_length == 0))) {
        high_part(map_length);
        array_part(map_length, map_width, one_y, one_x);
        high_part(map_length);
    }
}
