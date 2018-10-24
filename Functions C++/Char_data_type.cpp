#include <iostream>
using namespace std;
 
int	main(int argc, char* argv[])
{
	char	symbol = 'a';		// объявление переменной типа char и инициализация её символом 'a'
	
	cout << "symbol = " << symbol << endl;	// печать символа, содержащегося в переменной symbol
	
	char string[] = "cppstudio.com";		// объявление символьного массива (строки)
	
	cout << "string = " << string << endl;		// печать строки
	cout << "Для продолжения нажминте на Enter...";
	getchar();
	return 0;
}