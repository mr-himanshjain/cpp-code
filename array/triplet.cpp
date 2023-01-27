#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int triplet(int arr[], int n, int target)
{
    cout<<"i j k"<<endl;
    int i = 0;
    while(i < n-2)
    {
        int j = 1;
        while(j < n-1)
        {
            int k = 2;
            while( k < n )
            {
                if(arr[i] + arr[j] + arr[k] == target)
                       cout<<arr[i]<<" "<<arr[j] <<" "<<arr[k]<<endl;
                k++;
            }
            j++;
        }
        i++;
    }
    return 0;
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int len = size(arr);
    int target = 15;
    triplet(arr,len,target);
    return 0;
}