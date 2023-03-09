#include<iostream>
using namespace std;

bool valid(char s)
{
    if((s >='A' && s <= 'Z') || (s >='a' && s <= 'z') || (s >='0' && s <= '9'))
    {
        return true;
    }
    else{
        return false;
    }
}

char tolower(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkpalin(string str)
{
    int s = 0;
    int e = str.length()-1;
    while(s < e)
    {
        if(str[s] == str[e])
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

int main()
{
    string str;
    cout<<"enter your string: "<<endl;
    cin>>str;
    string temp = "";
    for(int i = 0; i < str.length(); i++)
    {
        if(valid(str[i]))
        {
            temp.push_back(str[i]);
        }
    }
    for(int i = 0; i < temp.length(); i++)
    {
        temp[i] = tolower(temp[i]);
    }
    cout<<"Is this palindrom or not: "<<checkpalin(temp);

}