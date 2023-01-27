#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool findunique(int arr[],int n)
{
    int ar1[n]; int i = 0,count = 0;
    while( i < n)
    {
        int j = i+1;
        while(j < n)
        {
            if(arr[i] == arr[j])
            {
                ar1[count++] = arr[i]; 
            }
            j++;
        }
        i++;
    }
    sort(ar1, ar1 + count);
    for(int l = 0; l < count; l++)
    {
        cout<< ar1[l] << " ";
    }
    return true;
}

int main(){
    int arr[] = {4,3,2,7,8,2,3,1};
    int n = size(arr);
    findunique(arr,n);
    return 0;
}

//broute force it is not an optimize code!!!!!!