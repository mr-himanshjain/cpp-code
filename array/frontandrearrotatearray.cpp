#include<iostream>
using namespace std;

int rotate(int arr[],int n,int m)
{
    int s = 0;
    int e = n-1;
    int temp = 0;
    for(int i = 0; i < m; i++)
    {
        if(s <= s+1)
        {
            temp = arr[s];
            arr[s] = arr[s+1];
            arr[s+1] = temp;
        }
        s++;
        if(e >= e-1)
        {
            temp = arr[e];
            arr[e] = arr[e-1];
            arr[e-1] = temp;
        }
        e--;
    }
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

int main()
{
    int arr[] = {3,5,6,8,5,2,1,6,8,12,5,8};
    int n = size(arr);
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int m;
    cin>>m;
    rotate(arr,n,m);
}