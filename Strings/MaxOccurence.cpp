#include<bits/stdc++.h>
#define ASCII_SIZE 256 
using namespace std;

char MaxOccurence(char *str)
{
    int count[ASCII_SIZE]={0};

    int length = strlen(str);
    int max=0;
    char result;

    for(int i=0;i<length;i++)
    {
        count[str[i]]++;
        if(max < count[str[i]])
        {
            max = count[str[i]];
            result = str[i];
        }
    }
    return result;

}

int main()
{
    char str[50];
    cout<<"\n Enter string : ";
    cin>>str;
    cout<<"\n Max occurring character is : "<<MaxOccurence(str);
}