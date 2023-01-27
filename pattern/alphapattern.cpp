#include<iostream>
using namespace std;
int main(){
    char input,alpha='A';
    cin>>input;
    //to convert the string in upper case so we don't get any error
    input = toupper(input);

    
    if(input >= 'a' && input <= 'z')
    {
        cout<<"enter uppercase latter"<<endl;
    }
    else{
        //main for loop
        for(int i = 1; i <= (input - 'A' + 1); ++i)
        {
            for(int j=1;j<=i;++j)
            {
                cout<<alpha<<" ";
            }
            ++alpha;
            cout<<endl;
        }
    }
    
    return 0;
}