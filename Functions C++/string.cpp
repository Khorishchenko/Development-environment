#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string str;
 
    cout << "Enter your name: ";
    getline(cin, str);
 
    cout << "Hello, " << str << "!!! \n";
 
    return 0;
}
