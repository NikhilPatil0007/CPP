#include<iostream>
using namespace  std;
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
    int n,r;
    cin>>n>>r;
    int ans= fact(n)/(fact(r)*fact(n-r));
    return 0;
}