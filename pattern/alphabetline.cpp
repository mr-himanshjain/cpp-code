#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i =1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            //print abcd line by line abcd abcd abcd
            char ch = 'A' + j - 1;
            cout<<ch<<" ";\
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}