#include <ncurses.h>
#include <string.h>
#include <stdio.h>

int mx_menu(int max_y, int max_x) {

	initscr();
	noecho();
	cbreak();
	curs_set(0);

	start_color();
	init_pair(1, COLOR_RED, COLOR_BLACK);

    attron(A_BOLD | A_BLINK);
    attron(COLOR_PAIR(1));
    mvprintw(max_y / 2 -1, max_x /2 -6,  "THE POWER GAME");
    attroff(COLOR_PAIR(1));
    attroff(A_BOLD | A_BLINK);

    WINDOW * menuwin = newwin(9, max_x -6, max_y /2, 3);   //Граница основного вектор меню/
	refresh();
	
	box(menuwin,0, 0);
	wrefresh(menuwin);    
	
	keypad(menuwin, true); 
    
	char choices[3][9] = {"Start", "Info", "Exit"}; 
	int choice;                                           
	int heighlight = 0;

	while(1) {
		for(int i = 0; i < 3; i++) {
			if(i == heighlight)	
				wattron(menuwin, A_REVERSE);
			mvwprintw(menuwin, i +3,  max_x /2 -5 , choices[i]);
			wattroff(menuwin, A_REVERSE);
		}

		
		choice = wgetch(menuwin);

		switch(choice) {
			case KEY_UP:
			heighlight--;
			break;
			case KEY_DOWN:
			heighlight++;
			break;
			default:
			break;
		}
		if(choice == 10)
			break;
	}

    endwin();
    refresh();

	return 13;
} 
