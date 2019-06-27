#include "endgame.h"

void mx_namegame(int max_y, int max_x); 

int main () {

	initscr();

	int higth, width, start_y, start_x;
	int max_y, max_x;

	getmaxyx(stdscr, max_y, max_x);

	higth = max_y - 2;
	width = max_x - 4;
	start_y = 1;
	start_x = 2;

	char name[20];

	mx_namegame(max_y, max_x);  //statr program
	clear();

	int x = mx_menu(max_y, max_x);
	clear();
	echo();
	if (x == 13)
		mx_hello(max_y, max_x, name);

	clear();
	refresh();

	WINDOW * win = newwin(higth, width, start_y, start_x);
	refresh();
	curs_set(0);

	box(win, 0, 0);
	mvwprintw(win, 2, 4, "NAME: -=( %s )=-", name);
	wrefresh(win);

	keypad(stdscr, true);

	player tank;
	tank.body[0] = " _____ ";
	tank.body[1] = "|  |  |";
	tank.body[2] = "| [_] |";
	tank.body[3] = "| <=> |";
	tank.body[4] = "|_____|";

	tank.y = max_y - 8;
	tank.x = (max_x - 7) / 2;

	for (int i = 0; i < 5; i++) {
		mvwaddstr(win, tank.y + i, tank.x, tank.body[i]);
	}
	wrefresh(win);

	while (1) {

		for (int j = 0; j < 5; j++) {
			mvwaddch(win, tank.y + j, tank.x, ' ');
			mvwaddch(win, tank.y + j, tank.x + 6, ' ');
		}

		switch (getch()) {
			case KEY_LEFT:
				--tank.x;
				break;
			case KEY_RIGHT:
				++tank.x;
				break;
		}
			for (int i = 0; i < 5; i++) {
				mvwaddstr(win, tank.y + i, tank.x, tank.body[i]);
			}
			wrefresh(win);
	}

	endwin();
	return 0;
}
