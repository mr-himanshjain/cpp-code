#include<iostream>
using namespace std;
int main()
{
    int i , j , k , n = 0;
    cin>>n;
    int m1 = 1;
    for(i = n; i >= 1; i--)
    {
        
        for(j = 1; j <= i-1; j++)
        {
            cout<<" ";
        }
        for(k = 1; k <= m1; k++)
        {
            cout<<"*";
        }
        cout<<endl;
        m1++;
    }

    
    int m = 1;
    for(i = n; i >= 1; i--)
    {
        for(j = 1; j <= i-1; j++)
        {
            cout<<" ";
        }
        for(k = 1; k <= m; k++)
        {
            if( k == 1 || k == m || m == n )
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        m++;
    }
}