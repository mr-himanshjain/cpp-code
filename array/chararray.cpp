#include<iostream>
using namespace std;

int charlen(char ch[])
{
    int count = 0;
    for(int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse(char ch[], int len)
{
    int s = 0;
    int e = len-1;
    while(s < e)
    {
        swap(ch[s++], ch[e--]);
    }
}

int main()
{
    char ch[10];
    cout<<"enter your name: "<<endl;
    cin>>ch;
    cout<<"your name is: "<<ch<<endl;
    int len = charlen(ch);
    cout<<"the length of the char array is: "<<len<<endl;
    reverse(ch,len);
    cout<<"your reverse name is: "<<ch<<endl;
}