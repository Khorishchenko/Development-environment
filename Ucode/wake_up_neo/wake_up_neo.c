#include <ncurses.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int COUNT = 3;
int SIZE = 15;

void delay(int number_of_seconds) {
   int milli_seconds = 1000 *number_of_seconds;
   clock_t start_time = clock();
   while(clock() < start_time + milli_seconds) {
       ;
   }
}

void wake_up_neo() {
	initscr();
	start_color();
	curs_set(0);

	init_pair(1, COLOR_GREEN, COLOR_BLACK);

	char *str[] = {"Wake up, Neo...","The Matrix has you..","Follow the white rabbit","Knock, knock, Neo", NULL};

	attron(COLOR_PAIR(1));
	for (int j = 0; str[j] != NULL; j++) {
		for (int i = 0; i < strlen(str[j]); i++, SIZE++) {
			mvprintw(COUNT, SIZE, "%c", str[j][i]);
			delay(100);
			refresh();
		}
		delay(800);
		for (int i = 0, y = 3, x = 15 + strlen(str[j]); i <= strlen(str[j]); i++, SIZE--) {
        	mvprintw(COUNT, SIZE, " ");
        	delay(1);
        	refresh();
		}
	}
	
	attroff(COLOR_PAIR(1));
	exit(0);
	getch();
	endwin();
}

int main() {
    wake_up_neo();
}
