#include<iostream>
using namespace std;

char characterOccer(string str)
{
    int arr[26] = {0};
    for(int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        int index = 0;
        index = ch - 'a';
        arr[index]++;
    }
    int maxi = -1,ans = 0;
    for(int i = 0; i<26; i++)
    {
        if(maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a' + ans;
}

int main()
{
    string str;
    cin>>str;
    cout<<" character Occer is: "<<characterOccer(str);

}