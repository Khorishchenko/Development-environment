#include <ncurses.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include "player.h"
using namespace std;

/*

void delay(int number_of_seconds) {					//  TIME !!!!
	int milli_seconds = 1000 *number_of_seconds;
	clock_t start_time = clock();
	while(clock() < start_time + milli_seconds) {
		;
	}
}

*/

int main(int argc, char **argv) {
	
	/* Ncurses start */
	initscr();
	noecho();
	cbreak();

	//get screen size 
	int yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);


	// creat a window for our input

	WINDOW * playwin = newwin(20, 60, (yMax/2) - 15, 15);
	box(playwin, 0, 0);
	refresh();
	wrefresh(playwin);

	Player * p = new Player(playwin, 1, 1, '#');
	do
	{
		p->display();
		wrefresh(playwin);
	} while (p->getmv() != 'x');

	// make sure program waits before
	endwin();
	// NCURSES END

	return 0;
}
