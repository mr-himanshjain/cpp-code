#include<iostream>
using namespace std;


bool validpalind(char ch){
    if((ch>='a'&&ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9'))
    {
        return 1;
    }
    return 0;
}

char Tolowercase(char ch){
    if((ch>='a' && ch<='z')||(ch>='0' && ch<='9'))
        return ch;
    else{
        char temp = ch-'A'+'a'; 
        return temp;
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


bool palindrome(string a){
    int st = 0;
    int e = a.length()-1;
    while(st<=e){
        if(a[st] != a[e] ){
            return 0;
        }
        else{
            st++;
            e--;
        }
    } 
    return 1;
}


bool ispal(string s){
    string temp = "";
    for (int j=0;j<s.length();j++){
        if(validpalind(s[j])){
            temp.push_back(s[j]);
        }
    }

    for(int j=0;j<temp.length();j++){
        temp[j] = Tolowercase(temp[j]);
    }
    return palindrome(temp);
}

int main(){
    string s ="A man, a plan, a canal: panama";
    cout<<"The string is palindrome or not: "<<ispal(s)<<endl;

}
