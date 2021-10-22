#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[50];
    cout<<"\n Enter a string : ";
    gets(str);

    for (int i = 0; str[i]!='\0'; i++)
    {
        for (int j = i+1; str[j]!='\0'; j++)
        {
            if (str[i]==str[j])
                cout<<"\n Character repeated is : "<<str[i]<<endl;
            
        }
    }

    return 0;
    
}