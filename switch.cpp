#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"input a character: ";
    cin>>button;
    switch (button)
    {
    case 'A':
        cout<<"hello";
        break;
    case 'B':
        cout<<"namaste";
        break;
    case 'C':
        cout<<"hola";
        break;
    default:
        cout<<"invalid choice";
        break;
    } 
    return 0;
}