#include<iostream>
using namespace std;

int peekelementofmountain(int arr[],int n)
{
    int s = 0; 
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while(s < e)
    {
        if(arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main(){
    int arr[] = {1,2,3,4,5,3,2,1,1};
    int len = size(arr);
    cout<<"the peek element index of mountain array is : "<<peekelementofmountain(arr,len)<<endl;
}