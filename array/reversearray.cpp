#include<iostream>
#include<algorithm>
using namespace std;

void reversearr(int arr[], int n)
{
    int s = 0;
    int e = n-1;
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {3,6,2,8,1};
    int len = size(arr);
    reversearr(arr,len);
}