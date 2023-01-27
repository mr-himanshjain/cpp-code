#include<iostream>
using namespace std;

int subtractproductandsum(int n){

    int prod = 1;
    int sum = 0;

    while(n != 0){
        int digit = n%10;
        prod = prod * digit;
        sum = sum + digit;

        n = n/10;
    }

    int answer = prod - sum ;
    return answer;
}

int main(){
    int n;
    cin>>n;
    cout<<subtractproductandsum(n);
    return 0;
}