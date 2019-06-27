#include "endgame.h"

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
	char *hello = "Enter your name:";

	move(max_y / 2, (max_x - strlen(hello)) / 2);
	printw("%s\n", hello);
	move(max_y / 2 + 1, max_x / 2);
	scanw("%s", name);
	clear();
	refresh();

	WINDOW * win = newwin(higth, width, start_y, start_x);
	refresh();
	curs_set(0);

	box(win, 0, 0);
	mvwprintw(win, 2, 4, "NAME: -=( %s )=-", name);
	wrefresh(win);

	noecho();
	keypad(stdscr, true);

//	p_shoot shot[5];
//	for (int i = 0; i < 5; ++i) {
//		shot[i].active = 0;
//		shot[i].ch = '^';
//	unsigned int currentshots = 0;
//	}

	player tank;
	tank.body[0] = " _____ ";
	tank.body[1] = "|  |  |";
	tank.body[2] = "| [_] |";
	tank.body[3] = "| <=> |";
	tank.body[4] = "|_____|";

	tank.y = max_y - 8;
	tank.x = (max_x - 7) / 2;

	enemy octo;
	octo.e_body[0] = "| | | | ";
	octo.e_body[1] = "\\ | | /";
	octo.e_body[2] = " \\|_|/ ";
	octo.e_body[3] = " /ooo\\ ";
	octo.e_body[4] = "(ooooo) ";

	for (int i = 0; i < 5; i++) {
		mvwaddstr(win, tank.y + i, tank.x, tank.body[i]);
	}
	wrefresh(win);

	octo.x = (rand() % (max_x - 17)) + 5;
	octo.y = 4;	
	int on = 1;
	while (on) {

		timeout(5);
		if (octo.y <= max_y + 3) {
			for (int i = 0; i < 5; i++) {
				if (octo.y - i >= 4 && octo.y - i <= max_y - 4) {
					mvwaddstr(win, octo.y - i , octo.x, octo.e_body[4 - i]);
				}
				if (octo.y >= 9 && octo.y - i <= max_y - 3) {
					mvwaddstr(win, octo.y - 5, octo.x, "       ");
				}
				wrefresh(win);
			}
			octo.y++;
		}
		else {
			octo.x = (rand() % (max_x - 17)) + 5;
			octo.y = 4;
		}

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
		if (tank.x > max_x - 12)
			tank.x = max_x - 12;
		else if (tank.x < 1)
			tank.x = 1;

		for (int i = 0; i < 5; i++) {
			mvwaddstr(win, tank.y + i, tank.x, tank.body[i]);
			wrefresh(win);
		}
		if (octo.y - 4 >= tank.y) {
			if ((octo.x >= tank.x && octo.x <= tank.x + 7)
				|| (octo.x + 8 >= tank.x && octo.x + 8 <= tank.x + 7)) {
				on = 0;
				clear();
				move(max_y / 2, (max_x - 15) / 2);
				wprintw(win, "You are DEAD...");
				refresh();
				break;
			}
		}
		
		wrefresh(win);
		usleep(30000);

	}
	getch();
	endwin();
	return 0;
}
