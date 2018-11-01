#include <iostream>
using namespace std;
 
int	main(int argc, char* argv[])
{
	bool	boolean = 0;

	cout << "Numbers[ "<< boolean <<" ] ";
	cin >> boolean;					// переменная типа bool с именем boolean
	
    	if ( boolean ) 						// условие оператора if
		cout << "true = "  << boolean << endl; 		// выполнится в случае истинности условия
	else
		cout << "false = " << boolean << endl;	// выполнится в случае, если условие ложно
	cin.clear();
	cin.ignore();
	cout << "Для продолжения нажмите на Enter... ";
	getchar();
	return 0;
}
