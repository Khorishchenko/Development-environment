#include <iostream>
										// библиотека манипулирования вводом/выводом
#include <iomanip>
										// заголовочный файл математических функций
#include <cmath>
using namespace std;
 
int	main(int argc, char* argv[])
{
	cout << "data type      "   	 << "byte"                      << "      "    << "max value  " << endl // заголовки столбцов
             << "bool               =  " << sizeof(bool)                << "         " << fixed << setprecision(2)
/*вычисляем максимальное значение для типа данных bool*/                           << (pow(2,sizeof(bool) * 8.0) - 1)               << endl
         << "char               =  " << sizeof(char)                << "         " << fixed << setprecision(2)
/*вычисляем максимальное значение для типа данных char*/                           << (pow(2,sizeof(char) * 8.0) - 1)               << endl
         << "short int          =  " << sizeof(short int)           << "         " << fixed << setprecision(2)
/*вычисляем максимальное значение для типа данных short int*/                      << (pow(2,sizeof(short int) * 8.0 - 1) - 1)      << endl
             << "unsigned short int =  " << sizeof(unsigned short int)  << "         " << fixed << setprecision(2)
/*вычисляем максимальное значение для типа данных unsigned short int*/             << (pow(2,sizeof(unsigned short int) * 8.0) - 1) << endl
             << "int                =  " << sizeof(int)                 << "         " << fixed << setprecision(2)
/*вычисляем максимальное значение для типа данных int*/                            << (pow(2,sizeof(int) * 8.0 - 1) - 1)            << endl
             << "unsigned int       =  " << sizeof(unsigned int)        << "         " << fixed << setprecision(2)
/*вычисляем максимальное значение для типа данных unsigned int*/                   << (pow(2,sizeof(unsigned int) * 8.0) - 1)       << endl
             << "long int           =  " << sizeof(long int)            << "         " << fixed << setprecision(2)
/*вычисляем максимальное значение для типа данных long int*/                       << (pow(2,sizeof(long int) * 8.0 - 1) - 1)       << endl
             << "unsigned long int  =  " << sizeof(unsigned long int)   << "         " << fixed << setprecision(2)
/*вычисляем максимальное значение для типа данных undigned long int*/              << (pow(2,sizeof(unsigned long int) * 8.0) - 1)  << endl
             << "float              =  " << sizeof(float)               << "         " << fixed << setprecision(2)
/*вычисляем максимальное значение для типа данных float*/                          << (pow(2,sizeof(float) * 8.0 - 1) - 1)          << endl
             << "double             =  " << sizeof(double)              << "         " << fixed << setprecision(2)
/*вычисляем максимальное значение для типа данных double*/                         << (pow(2,sizeof(double) * 8.0 - 1) - 1)         << endl;	
	cout << "Для продолжения нажмите на Enter...";
	getchar();
	return 0;
}
