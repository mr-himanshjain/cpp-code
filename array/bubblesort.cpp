#include<iostream>
using namespace std;

void insertionsort(int arr[], int n)
{
    bool swapped = false;
    for(int i = 1; i<n; i++)
    {        
        for(int j = 0; j<n-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {   
            cout<<"sawpped == false"<<endl; 
            break;     
        }
    }

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    cout<<endl;
}

int main(){
    int arr[] = {8,5,9,23,1,4,6};
    int arr1[] = {1,3,4,6,7,9};
    int len = size(arr);
    int len1 = size(arr1);
    insertionsort(arr,len);
    insertionsort(arr1,len1);
}