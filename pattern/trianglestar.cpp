#include<iostream>
using namespace std;
int main()
{
    int i , j , n = 0;
    cin>>n;
    for(i = 1; i < n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if( j == 1 || j == i || i == n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}