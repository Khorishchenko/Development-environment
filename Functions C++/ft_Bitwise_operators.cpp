//	Инициируются две переменные и
//	выводятся результаты выпольнения 
//	операторов ~, &, |, ^ 
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int	main()
{
	cout.unsetf(cout.dec);		// установка вывода в шестнадцатеричном виде
	cout.setf(cout.hex);

	int	nArg1 = 0x78ABCDEF;	// инициализация двух фргументов
	int	nArg2 = 0x12345678;

//-------Выполнение логических операций-------
	
	cout << " nArg1 = 0x" << nArg1 << endl;		// Сначала применяем унарный оператор NOT
	cout << "~nArg1 = 0x" << ~nArg1 << "\n" << endl;
	cout << " nArg2 = 0x" << nArg2 << endl;
	cout << "~nArg2 = 0x" << ~nArg2 << "\n" << endl;

//_________Теперь - бинарные операторы________

	cout << " 0x" << nArg1 << "\n"	
	     << "&0x" << nArg2 << "\n"
	     << " ----------" << " \n"
	     << " 0x" << (nArg1 & nArg2) << "\n" << endl;

	cout << " 0x" << nArg1 << "\n"
	     << "|0x" << nArg2 << "\n"
	     << " ___________" << "\n"
	     << " 0x" << (nArg1 | nArg2) << "\n" << endl;

	cout << " 0x" << nArg1 << "\n"
	     << "^0x" << nArg2 << "\n"
	     << " ___________" << "\n"
	     << " 0x" << (nArg1 ^ nArg2) << "\n" << endl;

	cout << "Нажмите Enter для продолжения ..." << endl;
	cin.ignore();
//	cin.get();

	return (0);
} 
