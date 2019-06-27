#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int  mx_atoi(char *str);
bool mx_map_error(const char *s);
bool mx_map_error2(const char *s);
bool mx_points_are_out(const char *s, char *arg3, char *arg4, char *arg5, char *arg6);
int  mx_strlen(const char *s);
bool mx_entry_point(char *str, int x1, int y1);
bool mx_exit_point(char *str, int x2, int y2);

int main(int argc, char **argv) {

    int fb;
    char buf[1];

    if (argc < 6 || argc > 6) {
        write(1, "usage: ./race04 [file_name] [x1] [y1] [x2] [y2]\n", 48); // проверка №1
     	exit(1);
    }

    fb = open(argv[1], O_RDONLY);

    if (fb == -1) {
        write(1, "map does not exist\n", 19); 			// проверка №2
        exit(1);
    }
	while (read(fb, buf, 1) > 0)				// Буф нужно настроить на запись масива !!!
			;
    if (mx_map_error(buf) == 0) {
		write(1, "map error\n", 10);					// проверка №3
		exit(1);
    }
	if (mx_map_error2(buf) == 0) {
		write(2, "map error\n", 10);					// проверка №3
		exit(1);
	}
	if (mx_points_are_out(buf, argv[3], argv[4], argv[5], argv[6]) == 0) {		// проверка №4
		write(1, "points are out of map range\n", 28);
		exit(1);
	}
	if (mx_entry_point(buf, mx_atoi(argv[3]), mx_atoi(argv[4]) == 0)) {			// проверка №5
		write(1, "entry point cannot be an obstacle\n", 34);
		exit(1);
	}
	if (mx_exit_point(buf, mx_atoi(argv[5]), mx_atoi(argv[6]) == 0)) {			// проверка №6
		write(1, "exit point cannot be an obstacle\n", 33);
		exit(1);
	}
//	*---------------нету :( нужно реализовать-----------------*   	  		-->	проверка №7

	if 
	return 0;
}

bool mx_map_error(const char *s) {
	for (int i = 0; s[i] != NULL; i++) {
		for (int j = 0; s[i][j] != '\n'; j++) {
			if (s[i][j] != '#' || s[i][j] != '.' || s[i][j] != ',')
				return false;
		}
	}
	return true;
}

bool mx_map_error2(const char *s) 
{
	for (int i = 1; s[i] != NULL; i++) {
		if (mx_strlen(&s[i - 1]) != mx_strlen(&s[i]))
			return false;
	}
	return true;
}

bool mx_points_are_out(const char *str, char *arg3, char *arg4, char *arg5, char *arg6) {
	int x;
	int y;
	for (x = 0; str[x] != NULL; x++)
		for (y = 0; str[x][y] != '\n'; y++)
	if (((x && y) < mx_atoi(arg3)) || ((x && y) < mx_atoi(arg4))
		|| ((x && y) < mx_atoi(arg5)) || ((x && y) < mx_atoi(arg6)))
			return false;
	else
		return true;
}

bool mx_entry_point(char *str, int x1, int y1) {
	if (str[x1][y1] == '#')
		return false;
	else
		return true;
}

bool mx_exit_point(char *str, int x2, int y2) {
	if (str[x2][y2] == '#')
		return false;
	else
		return true;
}
