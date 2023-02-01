#include <bits/stdc++.h>
#include<iostream>
using namespace std;

bool ispossible(int arr[], int n, int nocow, int mid)
{
    //cow count is 1
    int cowcount = 1;
    //last pos is our 1st element of arr
    int lastpos = arr[0];
    for(int i = 0; i<n; i++)
    {
        //here we check our arr[i] element - last pos is greaterthan equal to mid (yes/no)
        if(arr[i] - lastpos >= mid)
        {
            //if yes we inside the if condition
            //otherwise we continew the for loop 
            cowcount++;
            //here we check the cowcount is equal to no. of cow
            if(cowcount == nocow)
            {
                //if true exit function with return true
                return true;
            }
            lastpos = arr[i];
        }
    }
    //if the function is still running mean this is false
    return false;
}

int aggressivecow(int arr[],int n, int nocow)
{
    int s = 0;
    sort(arr, arr + n);
    int maxi = -1;
    //to get a max we use maxi 
    for(int i = 0; i<n; i++)
    {
        maxi = max(maxi,arr[i]);
    }
    int ans = -1;
    int e = maxi;
    //now our loop run from 0 to 6
    int mid = s + (e-s)/2;
    //here we take mid of 0 to 6
    while(s<=e)
    {
        //we go to condition and process 
        //if condition true we store mid in ans 
        if(ispossible(arr,n,nocow,mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        //here we update our mid
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
int arr[] = {4,1,2,3,6};
int len = size(arr);
int nocow = 2;
cout<<endl<<aggressivecow(arr,len,nocow)<<endl;
}