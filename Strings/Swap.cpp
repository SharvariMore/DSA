#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{
    char str1[50], str2[50], temp[50];
    cout<<"\n Enter 1st String : ";
    cin>>str1;
    cout<<"\n Enter 2nd String : ";
    cin>>str2;
    cout<<"\n String before swapping are :-";
    cout<<"\n 1st String is : "<<str1<<"\n 2nd String is : "<<str2;
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    cout<<"\n String after swapping are :-";
    cout<<"\n 1st String is : "<<str1<<"\n 2nd String is : "<<str2;
    cout<<endl;
    return 0;
}