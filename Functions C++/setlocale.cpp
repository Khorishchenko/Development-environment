// ПРИМЕР ИСПОЛЬЗОВАНИЯ ФУНКЦИИ  "setlocale"
 
#include <iostream>                    // для оператора cout
#include <ctime>                       // для функции time и localtime
#include <clocale>                     // для функций настройки локали
using namespace std; 

int	main ()
{
	time_t	numb_sec;                     // кол. сек прошедших с 00:00 , 1 января 1970 года
	struct	tm * timeinfo;                // структура хранения даты и времени
	char	buffer [80];
 
	struct	lconv * lc;                   // инфрмация о форматировании числовых значений
 
	time ( &numb_sec );                  // записать в numb_sec кол. сек прошедших с 00:00 , 1 января 1970 года
	timeinfo = localtime ( &numb_sec );  // заполняем структуру timeinfo, используя только значение количества сек.
 
	int twice = 0;                       // управляющая переменная циклом do while
 
	do
  	{
		cout << "Локаль: " << setlocale(LC_ALL,NULL) << endl; // установить Си-локаль
 
		strftime (buffer,80,"%c",timeinfo);		// преобразуем время в строку, которая сохраняется в buffer
		cout << "Дата: " << buffer << endl;
 
		lc = localeconv ();                	// сохранить параметры текущей локали в структуру lc
		cout << "Символ валюты: " << lc->currency_symbol << endl;
 
		setlocale (LC_ALL,""); 			// установить используемую системой локаль
	}
	while (!twice++); 				// цикл сработает всего 2 раза
 	cout << "Для продолжения нажмите на Enter...";
	getchar();
	return 0;
}
