#include<bits/stdc++.h>
using namespace std;

bool Rotation(string str1, string str2)
{
    if(str1.length()!=str2.length())
        return false;

    string temp = str1 + str1;
    return(temp.find(str2)!=string::npos);
}

int main()
{
    string str1="AACD", str2 ="ACDA";
    if (Rotation(str1,str2))
    {
        cout<<"\n Strings are Rotations of each other";
    }
    else
    {
        cout<<"\n Strings are not Rotations of each other";
    }
    
}