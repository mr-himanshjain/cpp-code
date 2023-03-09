#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n = 0;
    cin>>n;
    for(i = n; i >= 1; i--)
    {
        for(j = 1; j <= i-1; j++)
        {
            cout<<" ";
        }
        for(k = 1; k <= n; k++)
        {
            // if(i == 1 || i == n || k == 1 || k == n)
            if(i == 1 || i == n || k == 1 || k == n || i == k || k == n-i+1)
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


    for(i = n; i >= 1; i--)
    {
        for(j = 1; j <= i-1; j++)
        {
            cout<<" ";
        }
        for(k = 1; k <= n; k++)
        {
            if(i == 1 || i == n || k == 1 || k == n)
            // if(i == 1 || i == n || k == 1 || k == n || i == k || k == n-i+1)
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