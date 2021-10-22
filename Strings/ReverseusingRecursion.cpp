#include<bits/stdc++.h>
using namespace std;

void reverse(string str)
{
    if(str.size()==0)
    {
        return;
    }
    else
    {
        reverse(str.substr(1));
        cout<<str[0];
    }

}

int main()
{
    string str1;
    cout<<"\n Enter a string : ";
    cin>>str1;
    reverse(str1);
    return 0;
}