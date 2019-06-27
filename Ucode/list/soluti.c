#include <ncurses.h>

const char items[3][8] = {
    "Start", 
    "Setting", 
    "Exit"
};

int main()
{
    initscr();

    unsigned choice = 0; //Выбор пользователя

    curs_set(0); //"Убиваем" курсор
    //Включаем режим удобной работы с функциональными клавишами, другими словами KEY_UP и KEY_DOWN без этого не работали бы
    keypad(stdscr, true); 

    while ( true )
    {
        clear();
        for ( unsigned i = 0; i < 3; i++ ) //Проходим по всем элементам меню
        {
            if ( i == choice ) //Если текущий элемент совпадает с выбором пользователя
                addch('>'); //Выводим указатель
            else          
                addch(' '); //Иначе выводим " ", для равновесия

            printw("%s\n", items[i]);
        }

        //Получаем нажатие пользователя
        switch ( getch() )
        {
            case KEY_UP:
                if ( choice ) //Если возможно, переводим указатель вверх
                    choice--; 
                break;
            case KEY_DOWN:
                if ( choice != 3 ) //Если возможно, переводим указатель вниз
                    choice++;
                break;
        }
    }

    endwin();
    return 0;
}