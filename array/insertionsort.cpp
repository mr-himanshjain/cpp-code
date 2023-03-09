#include<iostream>
using namespace std;

void insertionsort(int arr[], int n)
{
    int i = 1;
    while( i < n )
    {
        int temp = arr[i];
        int j = i-1;
        while(j >= 0 )
        {
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else
                break;
            j--;
        }
        arr[j+1] = temp;
        i++;
    }

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={5,8,6,3,1,4,7,2,0,9};
    int len = size(arr);
    insertionsort(arr,len);
}