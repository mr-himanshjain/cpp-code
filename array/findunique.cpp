#include<iostream>
using namespace std;

int finduniq(int arr[],int n){
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int arr[] = {2,3,1,3,6,2,1};
    int n = size(arr);
    cout<<finduniq(arr,n);
}