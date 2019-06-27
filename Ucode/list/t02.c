#include <ncurses.h>


int main (int argc, char ** argv) {
	initscr();
	int height, width, start_y, start_x;   // переменые для квадрата
	height = 20;                           //размер квадрата
	width = 40;                            //размер  квадрата
	start_y = start_x = 20;                //расположение квадрата                
    
	WINDOW * win = newwin(height, width, start_y, start_x); //новое окно "КВАДРАТ"
    refresh();
    mvwprintw(win, 10, 10, "this will be my game"); //новое окно(win),кординаты текста который пишем(10,10), текст(this...)
	box(win, 0, 0); //с каких символов состоит построение фигуры (квадрата) по таблице аски
	wrefresh(win);

	int c = getch();

	endwin();

	return 0;
}