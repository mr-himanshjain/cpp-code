#include<iostream>
#include<vector>
using namespace std;

void rotatearray(vector<int>& arr, int pos)
{
    int n = arr.size();
    vector<int> temp(n);
    for(int i = 0; i < n; i++)
    {
        temp[(i+pos)%n] = arr[i];
    }
    arr = temp;

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" "; 
    }
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int posrotate = 3;
    rotatearray(arr,posrotate);
}