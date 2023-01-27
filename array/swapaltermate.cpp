#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int l = 0; l<n; l++)
    {
        cout<<arr[l]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int j = 0; j < n; j+=2)
    {
        if(j+1 < n){
            swap(arr[j],arr[j+1]);
        }
        
    }
    printArr(arr,n);
    
}