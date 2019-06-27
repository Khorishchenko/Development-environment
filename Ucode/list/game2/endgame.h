#ifndef ENDGAME_H
#define ENDGAME_H

#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <time.h>
#include <string.h>

typedef struct s_player {
	int y;
	int x;
	char *body[5];
} player;

char *mx_hello(int max_y, int max_x, char *name);
int mx_menu(int max_y, int max_x);

#endif
