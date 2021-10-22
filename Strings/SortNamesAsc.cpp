#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int i, j, n;
    char str[100][100], s[100];

    cout<<"\n Enter no. of names : ";
    cin>>n;

    cout<<"\n Enter names : ";
    for (i = 0; i < n; i++)
    {
        cin>>str[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (strcmp(str[i],str[j])>0)             //compare 2 strings 
            {
                strcpy(s,str[i]);                   //copying source string to destination string
                strcpy(str[i],str[j]);
                strcpy(str[j],s);
            }
            
        }
        
    }

    cout<<"\n The names in sorted order are : ";
    for (i = 0; i < n; i++)
    {
        cout<<"\n"<<str[i];
    }
    
    return 0;
    
}
