#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string str;
    cout<<"\n Enter string : ";
    getline(cin,str);
    int len = 0;
    while (str[len]!='\0')
    {
        len++;
    }

    int arr[256] = {0}, i;
    for (i = 0; i < len; i++)
    {
        if(str[i]==' ')
        continue;
         arr[str[i]]++;
    }

    cout<<"\n Repeating characters in string are :- "<<endl;
    for (i = 0; i < 256; i++)
    {
        if (arr[i]>1)
        {
            cout<<(char)(i)<<" occurs : "<<arr[i]<<" times "<<endl;
        }
        
    }
    
    return 0;
    
}