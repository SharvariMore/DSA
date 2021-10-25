#include<iostream>
#include<cstring>
using namespace std;

bool isSubset(string s1, string s2)
{
    int i = s1.length() - 1;      //traverse from last location
    int j = s2.length() - 1;      //traverse from last location

    while(i>=0 && j>=0)        
    {
        if (s2[j]==s1[i])        //if elements from 2nd string are found in 1st string decrement backwards pointers i & j
        {
            j--;
            i--;
        }
        else
        {
            i--;               //if elements from 2nd string are not found in 1st string decrement backwards pointer i until words from 2nd string are found
        }
    }

    if (j==-1)                //if we reach last position of 2nd string when all elements are found return true else return false
    {
        return true;
    }
    return false;
    
}

int main()
{
    string s1, s2;
    cin>>s1>>s2;
    cout<<isSubset(s1,s2)<<endl;
}