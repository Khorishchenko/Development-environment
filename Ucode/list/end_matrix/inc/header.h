//header.h
#include <ncurses.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_trail {
    int y;
    double start;
    double end;
    int speed;
}t_trail;

t_trail *generate_trail(int y);
void draw_trail(t_trail *trail, int x, int y, char arr[x][y]);
void matrix_rain();
void delay(int number_of_seconds);
void wake_up_neo();
int mx_strlen(const char *s);

