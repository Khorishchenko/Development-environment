#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"rus");
int a,b;
cout<<"Введите число";
cin>>a;
cout<<"Выберите систему счисления";
cin>>b;
while(a != 0)
    if(a<b)    {
        a%=b;
    cout<<a;
    }
    else
        a/=b;
}
