#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        //1234
        // 234
        //  34
        //   4

        //space
        int space = i - 1;
        while(space){
            cout<<" ";
            space = space - 1;
        }


        //star
        int j = i;
        while(j <= n){
            cout<<j; 
            j = j + 1;
        }
        
        cout<<endl;
        i = i + 1; 
    }
}