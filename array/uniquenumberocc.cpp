#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool uniqnumber(int arr[],int n){
    vector<int> freq(n + 1);
    for(int i = 1; i<=n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(arr[j]==i)
            {
                freq[i-1]++;
            }
        }
    }    
    for(int i = 1; i< n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(i == j || freq[i] == 0)
            {
                continue;
            }
            if(freq[i] == freq[j])
            {
                return false;
            }
        }
    }
    return true;
}

int main(){
    
    int arr[10] = {-3,0,1,-3,1,0,1,0,-3,10};
    int n = size(arr);
    bool result = uniqnumber(arr,n);
    if(result)
    {
        cout<<"yes"<<endl;
    }
    else
    cout<<"no"<<endl;
    
    return 0;
}