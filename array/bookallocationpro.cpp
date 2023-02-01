#include<iostream>
using namespace std;
bool isposoble(int arr[],int n,int student, int mid)
{
    int studentcount = 1;
    int pagesum = 0;
    for(int i = 0; i<n; i++) 
    {
        if(pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            studentcount++;
            if(studentcount > student || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int bookallocation(int arr[],int n,int student)
{
    int s = 0;
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e)
    {
        if(isposoble(arr,n,student,mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int arr[] = {10,20,30,40,50};
    int len = size(arr);
    int student = 2;
    int output = bookallocation(arr,len,student);
    cout<<output; 
}