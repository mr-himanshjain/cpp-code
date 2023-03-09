#include<iostream>
using namespace std;

bool rotatesort(int arr[] , int n)
{
    int count = 0;
    for(int i = 1; i < n; i++)
    {
        if(arr[i-1] > arr[i])
        {
            count++;
        }
    }

    if(arr[n-1] > arr[0])
    {
        count++;
    }
    return count <= 1;
}
int main()
{
    int arr[] = {3,4,5,1,2}; // return true
    // int arr[] = {3,5,7,1,6}; // return false
    int n = size(arr);
    cout << rotatesort(arr,n);
}