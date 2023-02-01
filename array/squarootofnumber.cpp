#include<iostream>
using namespace std;

long long int findsquare(int n)
{
    int start = 0;
    int end = n;
    long long int mid = start + (end - start) / 2;
    long long int ans = -1;
    while(start <= end)
    {
        long long int square = mid * mid;
        if(square == n)
        {
            return mid;
        }
        else if(square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

double moreprecision(int n, int precision, int temsolution)
{
    double factor = 1;
    double ans = temsolution;
    for(int i = 0; i<precision; i++)
    {
        factor = factor / 10;
        for(double j = ans; j*j<n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter a number: ";
    cin >> n;
    int temso = findsquare(n);
    cout<<endl<<"the square root of the number is: "<<temso; 
    cout<<endl<<"the square root with more precision are: "<<moreprecision(n,3,temso);
}