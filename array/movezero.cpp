#include<iostream>
using namespace std;

void movezero(int arr[], int n)
{
    int i = 0;
    
    for(int j = 0; j < n; j++)
    {
        if(arr[j] != 0)
        {
            swap(arr[i],arr[j]);
            i++;  
        }
    }
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {0,2,4,0,5,0,0};
    int len = size(arr);
    movezero(arr,len);
}