#include<bits/stdc++.h>
using namespace std;

void RLE(string str)
{
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        int count=1;
        while (i<n-1 && str[i]==str[i+1])   //count occurences of current character
        {
            count++;
            i++;
        }
        cout<<str[i]<<count;
    }
    
}

int main()
{
    string str;
    cout<<"\n Enter a string : ";
    cin>>str;
    RLE(str);
    return 0;
}