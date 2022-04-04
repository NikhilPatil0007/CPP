#include<iostream>
using namespace std;
int fact(int num)
{
    int fact;
    for(int i=2;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j))<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
