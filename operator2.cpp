#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    if(n==10)
    {
        cout<<"it is equal";
    }
    else
    {
        if(n<10)
        {
            cout<<"it is smaller than 10";
        }
        else if (n>10)
        {
            cout<<"it is greater than 10";
        }
    }
}