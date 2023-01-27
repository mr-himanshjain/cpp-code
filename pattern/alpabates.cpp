#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        //alphabet print line by line like AAAA BBBB CCCC DDDD
        // char ch1 = 'A' + i - 1;
        while(j<=n){
            //alphabet print line by line like ABCD ABCD ABCD ABCD
            char ch2 = 'A' + j - 1;
            // cout<<ch1<<" ";
            cout<<ch2;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}

