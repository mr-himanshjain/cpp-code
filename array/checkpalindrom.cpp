#include<iostream>
using namespace std;

bool checkpalindrom(char name[], int len)
{
    int s = 0;
    int e = len -1;
    while(s < e)
    {
        if(tolower(name[s]) == tolower(name[e]))
        {
            s++;
            e--;
        }
        else{
            return false;
        }
    }
    return true;
}

char tolower(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp; 
    }
}

int charlen(char ch[])
{
    int count = 0;
    for(int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main(){
    char name[10];
    cout<<"enter your name: ";
    cin>>name;
    int len = charlen(name);
    int check = checkpalindrom(name,len);
    if(check == 1)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}