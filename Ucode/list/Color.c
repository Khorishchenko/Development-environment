#include <unistd.h>
#include <stdio.h>

int main(void) {
		start_ncurses(true, true);

		attron(A_REVERSE);
		printw("This is some text");
		attroff(A_REVERSE);

		getch();
}
