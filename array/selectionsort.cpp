#include <bits/stdc++.h>
using namespace std;

void selcetionsort(int arr[], int n)
{
    for(int i = 0; i<n-1; i++)
    {
        int minIndex = i;
        for(int j = i+1; j<n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i];
    }
}

int main(){
    int arr[] = {5,3,7,9,1,2,0};
    int len = size(arr);
    selcetionsort(arr,len);
}