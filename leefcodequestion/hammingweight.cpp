#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int hammingweight(uint32_t n){

    int count = 0;
    while(n != 0){

        if(n&1){
            count++;
        }
        n = n >> 1;
    }
    return count;
}

// int main(){
//     int n = 101;
//     cout<<hammingweight(n)<<endl;
//     return 0;
// }

//there is quesion is how to take binary string as a input so that we can run this program as well as posible..