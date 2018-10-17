#include <iostream>
using namespace std;
 
int	main(int argc, char* argv[])
{
	bool	boolean = 25; 					// переменная типа bool с именем boolean
	
    	if ( boolean ) 						// условие оператора if
		cout << "true = "  << boolean << endl; 		// выполнится в случае истинности условия
	else
		cout << "false = " << boolean << endl;		// выполнится в случае, если условие ложно
	cout << "Для продолжения нажмите на Enter... ";
	getchar();
	return 0;
}
