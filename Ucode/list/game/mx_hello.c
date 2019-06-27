#include <unistd.h>
#include <time.h>
#include <ncurses.h>
#include <string.h>

void delay(int number_of_seconds);

char *mx_name(int max_y, int max_x, char *name) {
	
	initscr();
	start_color();
	curs_set();

	init_pair(1, COLOR_GREEN, COLOR_WHITE);
	init_pair(2, COLOR_PINK, COLOR_WHITE);

	char name1[] = "Hello! What is yor name?";
	char str[] "WELCOME!!!";

	move(max_y / 2,(max_x - strlen(nello2)) / 2);

	attron(COLOR_PAIR(1)):
	for (int i = 0; i < strlen(name1); i++) {
		printw("%c", name1[i]);
		delay(100);
		refresh();
	}

	move(max_y / 2 + 1, max_x / 2);
	scanf("%s", name);
	attroff(COLOR_PAIR(1));

	move(max_y / 2 + 2, max_x / 2);
	
	attron(COLOR_PAIR(2));

	for (int i = 0; i < strlen(str); i++) {
		printw("%c", str[i]);
		delay(100);
		refresh();
	}
	
	attroff(COLOR_PAIR(2));

	get_ch();
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
