#include <iostream>
#include <vector>
#include <string>
#include <ncurses.h>
using namespace std;
vector <string> list; //наш вектор с элементами
int current_element; //номер текущего элемента
//функция обновления экрана,
//будет вызываться при каждом нажатии клавиш
void update_screen()
{
  erase(); //чистим экран
//выводим все элементы вектора
  for (size_t i = 0; i < list.size(); i++)
      {
//если счетчик равен текущему элементу
       if (i == current_element)
          {
//включаем атрибут "жирный"
           attron(A_BOLD);
//выбираем цветовую пару номер 1
           attron (COLOR_PAIR(1));
//выводим строковое представление элемента списка
           printw ("%s\n", list[i].c_str());
//выключаем выбранные атрибуты
           attroff (COLOR_PAIR(1));
           attroff(A_BOLD);
          } 
       else //иначе выводим обычным цветом   
          {
           attron (COLOR_PAIR(2));
           printw ("%s\n", list[i].c_str());
           attroff (COLOR_PAIR(2));
          }
      }
}
//главная функция
int main (int argc, char *argv[])
{
//всё инициализируем
  initscr();
  start_color();
  keypad (stdscr, TRUE); 
  noecho();
//создаем цветовые пары  
  init_pair (1, COLOR_RED, COLOR_BLACK);
  init_pair (2, COLOR_WHITE, COLOR_BLACK);
  
//заполняем вектор тремя элементами
  list.push_back ("one");
  list.push_back ("two");
  list.push_back ("three");
  
//текущий элемент сбрасываем в ноль
  current_element = 0;
//объявляем переменную для хранения нажатой клавиши
  int ch = 0;
 
//считываем клавиши, пока не будет нажата 'q'  
  while (ch != 'q')
        {
         //обновляем экран
         update_screen();
         
         //ожидаем нажатия на клавишу и 
         //получаем её код в ch
         ch = getch();
 
         switch (ch)
                {
//если нажата "вверх", то уменьшаем current_element
                 case KEY_UP: 
                             if (current_element > 0)
                                current_element--;
                             break;
//если нажата "вниз", то увеличиваем current_element
                case KEY_DOWN: 
                               if (current_element < list.size()-1)
                                  current_element++;
                                break;
//обработка нажатия Enter
                 case '\n': 
                               ;//пользователь выбрал элемент
                               //list[current_element]
                               break;
                }
        }     
  endwin();
  return 0;
}
