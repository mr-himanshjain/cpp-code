#include<iostream>
#include<vector>
using namespace std;

void mergesort(vector<int>& arr1,int n, vector<int>& arr2,int m)
{
    int p1 = n-1;
    int p2 = m-1;
    int i = n+m-1;
    while(p2 >= 0)
    {
        if(p1>=0 && arr1[p1] > arr2[p2])
        {
            arr1[i] = arr1[p1];
            i--;
            p1--;
        }     
        else 
        {
            arr1[i] = arr2[p2];
            i--;
            p2--; 
        }
        if(arr1[p1] < arr1[i])
        {
        arr1[i] = arr2[p2];
        }
    }
    
    

    for(int q = 0; q < arr1.size(); q++)
    {
        cout<<arr1[q]<<" ";
    }
}


int main()
{
    vector<int> arr1 = {2,3,4,0,0,0};
    vector<int> arr2 = {1,5,6};
    
    mergesort(arr1,3,arr2,3);
}