#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str1[50];
    int i, length, flag=0;

    cout<<"\n Enter a string : ";
    cin>>str1;

    length = strlen(str1);

    for (i = 0; i < length; i++)
    {
        if(str1[i]!=str1[length-i-1])
        {
            flag=1;
            break;
        }
    }


if(flag)
{
    cout<<str1<<" is not Palindrome"<<endl;
}
else
{
    cout<<str1<<" is a Palindrome"<<endl;
}
return 0;
}
