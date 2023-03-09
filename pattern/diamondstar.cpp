#include<iostream>
using namespace std;
int main()
{
    int i , j , k , n = 0;
    cin >> n;
    int space  = n - 1;
    int star = 1;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j < space; j++)
        {
            cout<<" ";
        }
        for(k = 1; k <= star; k++)
        {
            cout<<"*";
        }
        if(space > i)
        {
            space = space - 1;
            star = star + 2;
        }
        if(space < i)
        {
            space = space + 1;
            star = star - 2;
        }
        cout<<endl;
    }
}