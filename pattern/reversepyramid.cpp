#include<iostream>
using namespace std;
int main()
{
    int i , k , j , n = 0;
    cin>> n;
    int m = 1;
    for(i = n; i >= 1; i--)
    {
        for(j = 1; j < m; j++)
        {
            cout<<" ";
        }
        for(k = 1; k <= 2*i-1; k++)
        {
            cout<<"*";
        }
        cout<<endl;
        m++;
    }


    int m1 = 1;
    for(i = n; i >= 1; i--)
    {
        for(j = 1; j < m1; j++)
        {
            cout<<" ";
        }
        for(k = 1; k <= 2*i-1; k++)
        {
            if( k == 1 || k == 2*i-1 || i == n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
        m1++;
    }
}