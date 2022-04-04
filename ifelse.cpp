#include<iostream>
using namespace std;
int main()
{
    int savings;
    cout<<"enter savings: ";
    cin>>savings;
    if(savings>10000)
    {
        cout<<"roadtrip";
        if(savings<10000)
        {
            cout<<"beachtrip";
        }
    }
    else
    {
        if(savings<5000)
        {
            cout<<"punetrip";
        }
        else
        {
            cout<<"friends";
        }
    }
    return 0;
}