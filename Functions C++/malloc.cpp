#include <iostream>
#include <cstdlib>
using namespace std; 

int	main()
{
	int	len = 0;
 
	cout << "Укажите длину строки в символах: ";
	cin >> len;
 
	char *buffer = (char*) malloc(len + 1);	// динамическое выделение памяти под символьную строку
	if (buffer == NULL) 
		exit (1);                       // если выделение памяти не выполнилось, завершить программу
 
	for (int ix = 0; ix < len; ix++)
	{
		buffer[ix] = rand() % 26 + 'a';
	}
	buffer[len]='\0';                                 // нулевой элемент
 
	cout << "Случайная строка: " << buffer << "\n";
	free (buffer);                                     // освобождаем память
 
	return (0);
}
