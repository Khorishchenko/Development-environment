#include <ncurses.h>
#include <unistd.h>
#include <string.h>
#include <time.h>

int HEIGHT = 50;
int WINDTH = 40;
int START_Y = 1;
int START_X = 5;
/*
void delay(int number_of_seconds) {						TIME !!!!
	int milli_seconds = 1000 *number_of_seconds;
	clock_t start_time = clock();
	while(clock() < start_time + milli_seconds) {
		;
	}
}
*/
int main(void) {
	initscr();
	start_color();
	curs_set(0);
	cbreak();

	char *str[4];

	str[0] = " # ";
	str[1] = "###";
	str[2] = " # ";
	str[3] = "# #";
	
	WINDOW * win = newwin(HEIGHT, WINDTH, START_Y, START_X);
	refresh();

	box(win, 0, 0);
    wrefresh(win);


	for (int i = 0; i < 4; i++) {
		mvprintw(46 + i, 22, "%s", str[i]);
	}

	keypad(win, true);

	int c = wgetch(win);

	if (c == KEY_UP) {
		for (int i = 0; i < 4; i++) {
			mvprintw(46 + i, 22, "   ");
		}

		for (int i = 0; i < 4; i++) {
			mvprintw(46 + i, 22 - i, "%s", str[i]);
		}
		wrefresh(win);
	}
	
	box(win, 0, 0);
	wrefresh(win);

	endwin();

	return 0;
}
