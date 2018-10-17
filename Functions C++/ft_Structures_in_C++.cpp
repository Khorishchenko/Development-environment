#include <iostream>
using namespace std;
 
struct	building     		//Создаем структуру!
{                  
	char const	*owner;       	//здесь будет храниться имя владельца
	char const	*city;        	//название города
	int		amountRooms;   	//количество комнат
	float		price;       	//цена
};                 
 
int	main()
{
	setlocale (LC_ALL, "rus");
 
	building apartment1;   			//это объект структуры с типом данных, именем структуры, building
 
	apartment1.owner = "Денис"; 		//заполняем данные о владельце и т.д.
	apartment1.city = "Симферополь";      
	apartment1.amountRooms = 5;
	apartment1.price = 150000;
 
	cout << "Владелец квартиры: " << apartment1.owner << endl;
	cout << "Квартира находится в городе: " << apartment1.city << endl;
	cout << "Количество комнат: " << apartment1.amountRooms << endl;
	cout << "Стоимость: " << apartment1.price << " $" << endl;
	
	cout << "Для продолжения нажмите на Enter... ";
        getchar(); 
	return 0;
}

/*
Что ещё важно знать:

Объект структуры можно объявить до функции main(). Это выглядело бы так:          

struct	building
{                  
	char const	*owner;  
	char const	*city;      
	int 		amountRooms; 
	float 		price;      
}	apartment1; //объявление объекта типа building

*/
