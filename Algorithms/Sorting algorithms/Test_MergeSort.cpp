#include "stdafx.h"	// НЕ РАБОТАЕТ!!! -- ИСПРАВИТЬ!
#include <iostream>
#include <cstring>
using namespace std;

struct contact
{
    char nomer[50];
    char adress[50];
    char sname[50];
};


int	base_output(contact *buf, int kol_el)
{
	cout << "Полный список контактов базы данных\n";
	cout << "-----------------------------------------------------------\n";
	for (int i = 0; i < kol_el; i++)
    	{
        	cout << (i + 1) << ".) " << buf[i].sname;
        	cout << "\n" << buf[i].nomer;
        	cout << "\n" << buf[i].adress;
        	cout << "\n\n";
    	}
    	cout << "-----------------------------------------------------------\n";
    	system("pause");
    	return 0;
}
void	MergeSort(contact* buf, int first, int last)
{
    	if (first >= last-1) return;

    	int mid = (first+last)/2;
    	MergeSort(buf,first,mid);
    	MergeSort(buf,mid,last);

    	contact * mas = new contact[last - first];
    	for(int i = first; i < last; ++i) 
		mas[i-first] = buf[i];

    	int l = 0, r = mid - first;
    	for(int i = first; i < last; ++i)
    	{
        	if (l == mid-first)
            		buf[i] = mas[r++];
        	else if (r == last-first)
            		buf[i] = mas[l++];
        	else if (strcmp(mas[l].sname,mas[r].sname) < 0)
            		buf[i] = mas[l++];
        	else
            	buf[i] = mas[r++];
    	}
    	delete[] mas;
}

int	main(int argc, char* argv[])
{
	 
	setlocale(LC_ALL, "RUS");
    	FILE *f;
    	f = fopen("telbook.dat", "r+b");
    	fseek(f, 0, SEEK_END);
    
	int size = ftell(f);
    	int kol_el = size / sizeof(contact);
    
	contact *buf = new contact[kol_el];
    	fseek(f, 0, SEEK_SET);
    	fread(buf, sizeof(contact), kol_el, f);
    	fclose(f);
    
	int first = 0;
    	int last = kol_el;
    	
	unsigned int rezh = 0;
    	do
	{
        	system("cls");
        	const int NotUsed = system("color 03");
        
		cout << "Выберите действие:\n";
        	cout << "1.Показать базу контактов.\n";
        	cout << "2.Сортировка по алфавиту.(слиянием)\n";
        	cout << "3.Выйти из программы.\n";
        	cin >> rezh;
        	
		switch (rezh)
        	{
			case 1:
        		{
            			base_output(buf,kol_el);
            			break;
        		}
        		case 2:
        		{
            			MergeSort(buf, first, last);
            			break;
        		}
        	}
	} 
	while (rezh != 3);

	system("cls");
	system("pause");
	return 0;
}
