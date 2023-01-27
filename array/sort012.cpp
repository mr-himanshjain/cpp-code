#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int sort012(int arr[],int n){

    // sort(arr, arr + n);
    // for(int i = 0; i<n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid <= high)
    {
        switch(arr[mid])
        {
            case 0:
                swap(arr[low++],arr[mid++]);
                break;
            
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid],arr[high--]);
                break;
        }
    }
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}

int main(){
    int arr[] = {0,2,2,1,0,1,1,0,2};
    int len = size(arr);
    sort012(arr,len);
}