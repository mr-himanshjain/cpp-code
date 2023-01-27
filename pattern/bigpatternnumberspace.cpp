#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i = 1;
    while(i<=n){

        //triangle
        int j = 1;

        int val1 = n - i;  //for triangle shape
        while(j <= i){
            while(val1){ //for triangle shape
                cout<<j;
                val1 = val1 - 1;//for triangle shape
                j = j + 1;
            }
            j = j + 1;
        }
        //space 1
        int space = i - 1;
        while(space){
            cout<<"*";
            space = space - 1;
        }
        //space 1
        int space1 = i - 1;
        while(space1){
            cout<<"*";
            space1 = space1 - 1;
            j = j + 1;
        }
        //triangle
        // int val = n - i + 1;
        // while(j <= i){
        //     while(val){
        //         cout<<j;
        //         val = val - 1;
        //     }
        //     j = j + 1;
        // }       

        cout<<endl;
        i = i + 1;
    }
}