#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	initscr();
	
	raw();
	start_color();
	init_pair(1, COLOR_GREEN, COLOR_BLACK);

	char str[] = "  Wake up, Neo..";

	attron(COLOR_PAIR(1));

	for (int i = 0; i < 16; i++) {
		printw(&str[i]);
	}
	attroff(COLOR_PAIR(1));

	getch();
	endwin();

	printf("\n");

	return 0;
}

