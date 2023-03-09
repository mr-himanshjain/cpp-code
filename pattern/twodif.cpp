#include<iostream>
using namespace std;
int main()
{
    int j = 5 , l = 1;
    int n = 5;
    for(int i = 0; i < n; i++)
    {
        cout<<j<<" ";
        for(int j = 1; j < n-i+1; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
        cout<<l<<" ";
        for(int k = 0; k <= i; k++)
        {
            cout<<" * ";
        }
        cout<<endl;
        j--;
        l++;
    }
    return 0;
}