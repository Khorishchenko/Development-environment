#include "endgame.h"

#include <unistd.h>
#include <time.h>
#include <ncurses.h>
#include <string.h>

void delay(int number_of_seconds);

char *mx_hello(int max_y, int max_x, char *name) {
	
	initscr();
	start_color();
	curs_set(0);

	init_pair(1, COLOR_GREEN, COLOR_BLACK);
	init_pair(2, COLOR_RED, COLOR_BLACK);

	char name1[] = "Hello! What is yor name?";
	char str[] = "WELCOME!!!";

	move(max_y / 2,(max_x - strlen(name1)) / 2);

	attron(COLOR_PAIR(1));
	attron(A_BOLD | A_BOLD);
	for (int i = 0, y = strlen(name1); i < y; i++) {
		printw("%c", name1[i]);
		delay(100);
		refresh();
	}

	move(max_y / 2 + 1, max_x / 2 - 3);
	scanw("%s", name);
	refresh();

	attroff(A_BOLD | A_BOLD);
	attroff(COLOR_PAIR(1));

	move(max_y / 2 + 2, max_x / 2 - 4);
	
	attron(COLOR_PAIR(2));
	attron(A_BOLD | A_BOLD);
	for (int i = 0, y = strlen(str); i < y; i++) {
		printw("%c", str[i]);
		delay(100);
		refresh();
	}
	
	attroff(COLOR_PAIR(2));
	attroff(A_BOLD | A_BOLD);
	getch();
	endwin();
	return name;
}

void delay(int number_of_seconds) {
	int milli_seconds = 1000 *number_of_seconds;
	clock_t start_time = clock();
	while(clock() < start_time + milli_seconds) {
		;
	}
}
