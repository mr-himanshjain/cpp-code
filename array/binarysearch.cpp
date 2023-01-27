#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int s = 0; int e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <= e)
    {
        if(arr[mid] == key)
        {
            e = mid - 1;
            ans = mid;
        }
        else if(arr[mid] > key)
        {
            e = mid - 1;
        }
        else if(arr[mid] < key)
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    } 
    return ans;
}

int lastOcc(int arr[], int n, int key)
{
    int s = 0; int e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <= e)
    {
        if(arr[mid] == key)
        {
            s = mid + 1;
            ans = mid;
        }
        else if(arr[mid] > key)
        {
            e = mid - 1;
        }
        else if(arr[mid] < key)
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    } 
    return ans;
}

int main(){
    int arr[] = {0,1,1,1,2,2,2,2,3};
    int len = size(arr);
    
    int arr1[] = {0,1,1,1,3,3,3,4,4,4,4,4};
    int len1 = size(arr1);

    cout<<"first Occerence of 2 at index is : "<<firstOcc(arr,len,2)<<endl;
    cout<<"first Occerence of 4 at index is : "<<firstOcc(arr1,len1,4)<<endl;
    
    cout<<"last Occerence of 2 at index is : "<<lastOcc(arr,len,2)<<endl;
    cout<<"last Occerence of 4 at index is : "<<lastOcc(arr1,len1,4)<<endl;

    cout<<"total number of occerance of 2 is : "<< lastOcc(arr,len,2) - firstOcc(arr,len,2) +1 <<endl;
    cout<<"total number of occerance 4 is : "<< lastOcc(arr1,len1,4) - firstOcc(arr1,len1,4) +1 ;

}

// if(arr[i] == key)
//         {
//             int j = i+1;
//             while(j < n)
//             {
//                 if(arr[j] == key)
//                 {
//                     j++;
//                 }
//                 else
//                 {
//                     cout<< i <<" ";
//                     cout<< j-1 <<" "<<endl;
//                     break;
//                 }
//             }
//         }