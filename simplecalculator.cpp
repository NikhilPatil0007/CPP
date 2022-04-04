#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    char choice;
    cout<<"Enter choice: ";
    cin>>choice;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter seacond number: ";
    cin>>b;
    switch (choice)
    {
    case '+':
        c=a+b;
        cout<<c;
        break;

    case '-':
        c=a-b;
        cout<<c;
        break;

    default:
        cout<<"Enter Invalid choice";
        break;
    }
    return 0;
}