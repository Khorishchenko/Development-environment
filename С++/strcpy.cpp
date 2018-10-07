//пример использования функции strcpy
 
#include <iostream>
#include <cstring>
using namespace std;
 
int	main()
{
	char	str1[] = "Я программист";
	char	str2[40];
	char	str3[80];

	strcpy (str2, str1);                              // копируем строку str1 в str2
	strcpy (str3, "копирование выполнено успешно\n"); // копируем строку во втором параметре в str3
	cout	<< "str1: "   << str1
		<< "\nstr2: " << str2
		<< "\nstr3: " << str3;
	return 0;
}
