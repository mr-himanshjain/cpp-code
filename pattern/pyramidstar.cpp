#include<iostream>
using namespace std;
int main()
{
    int i , j , k , n = 0;
    cin>>n;
    int m = n;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= m-1; j++)
        {
            cout<<" ";
        }
        for(k = 1; k <= 2*i-1; k++)
        {
            cout<<"*";
        }
        cout<<endl;
        m--;
    }

    int m1 = n;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= m1-1; j++)
        {
            cout<<" ";
        }
        for(k = 1; k <= 2*i-1; k++)
        {
            if( k == 1 || k == 2*i-1 || i == n )
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
        m1--;
    }
}