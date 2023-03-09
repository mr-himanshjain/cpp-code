#include<iostream>
#include<vector>
using namespace std;

vector<int> positionreversearr(vector<int>& arr,int m)
{
    int s = m+1;
    int e = arr.size()-1;
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    
    return arr;
}

void printarr(vector<int> arr)
{
    for(int i = 0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);

    int position = 3;
    printarr(arr);
    cout<<endl;
    vector<int> result =  positionreversearr(arr, position);
    printarr(arr);
}