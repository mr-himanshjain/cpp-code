#include<iostream>
using namespace std;
int main()
{
    int i , j , k ,l,m, n;
    cin>>n;
    int space = n-1,star = 1;
    int sapce1 = n-1;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j < space; j++)
        {
            cout<<"*";
        }
        for(k = 1; k < 2*i; k++)
        {
            cout<<" ";
        }
        for(l = 1; l < sapce1; l++)
        {
            cout<<"*";
        }
        if(space < i)
        {
            star = star - 2;
            space = space + 1;
        }
        if(space > i)
        {
            star = star + 2;
            space = space - 1;
        }
        cout<<endl;
    } 
}