#include<iostream>
#include<string.h>
using namespace std;

char Tolowercase(char ch){
    if((ch>='a' && ch<='z'))
        return ch;
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}

bool validpalind(char ch){
    if((ch>='a'&&ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9'))
    {
        return 1;
    }
    return 0;
}

// bool palindrome(char ch[],int n){
//     int s = 0;
//     int e = n-1;
//     while(s<=e){
//         if(ch[s]!=ch[e]){
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//     } 
//     return 1;
// }

bool palindrome(char ch[],int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(Tolowercase( ch[s] ) != Tolowercase( ch[e] )){
            return 0;
        }
        else{
            s++;
            e--;
        }
    } 
    return 1;
}



void reverse(char ch[],int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(ch[s++], ch[e--]);
    }
}

int length(char ch[]){
    int count = 0;
    for(int i=0;ch[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

int main(){

    
    //char ch = 'a';
    int len;
    char ch[10];
    cout<<"enter your name: "<<endl;
    cin>>ch;
    len = length(ch);
    cout<<"string you enter: "<<ch<<endl;
    cout<<"the length of string: "<<len<<endl;
    reverse(ch,len);
    cout<<"entered string reverse: "<<ch<<endl;
    cout<<"the string is palindrome or not: "<<palindrome(ch,len)<<endl;

}