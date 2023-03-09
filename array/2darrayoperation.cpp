#include<iostream>
using namespace std;

bool elesearch(int arr[][3],int target,int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sumbycol(int arr[][3],int row,int col)
{
    //printing and sum of col 
    for(int col = 0; col < 3; col++)
    {
        int sum = 0;
        for(int row = 0; row < 3; row++)
        {
            cout << arr[row][col]<<" ";
            sum += arr[row][col];
        }
        cout<<sum<<endl;
    }
}

void sumbyrow(int arr[][3],int row,int col)
{
    for(int row = 0; row < 3; row++)
    {
        int sum = 0;
        for(int col = 0; col < 3; col++)
        {
            cout<< arr[row][col]<<" ";
            sum += arr[row][col];
        }
        cout<<sum;
        cout<<endl;
    }
}

void largestrowsum(int arr[][3],int row,int col)
{
    int maxi = INT_MIN;
    int index = -1;
    for(int row = 0; row < 3; row++)
    {
        int sum = 0;
        for(int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout<<sum<<endl;

        if(maxi < sum)
        {
            maxi = sum;
            index = row;
        }
    }

    cout<<"the maximum sum is: "<< maxi<<endl;
    cout<<"the number of the row is: "<< index;
}

int main()
{
    int arr[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"sum by col is: "<<endl;
    sumbycol(arr, 3, 3);
    cout<<endl;
    cout<<"sum by row is: "<<endl;
    sumbyrow(arr, 3, 3);
    cout<<endl;
    int target;
    cin>>target;

    if(elesearch(arr, target,3,3))
    {
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    largestrowsum(arr,3,3);
    
}