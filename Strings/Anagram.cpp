#include<bits/stdc++.h>
using namespace std;

bool Anagram(string str1, string str2)
{
    int n1 = str1.length();
    int n2 = str2.length();

    if (n1!=n2)              //if string lengths are not equal then no amalgram
        return false;

    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    for (int i = 0; i < n1; i++)
        
    if(str1!=str2)         //compare strings
        return false;

    return true;
    
}

int main()
{
    string str1;
    cout<<"\n Enter 1st string : ";
    cin>>str1;

    string str2;
    cout<<"\n Enter 2nd string : ";
    cin>>str2;

    if(Anagram(str1,str2))
        cout<<"\n Both strings are anagrams of each other";
    else
        cout<<"\n Both strings are not anagrams of each other!";

    return 0;
}
