#include<iostream>
using namespace std;

int main()
{
    int a[100], i, n;
    cout<<"\n Enter number :";
    cin>>n;
    for ( i = 0; n>0; i++)
    {
        a[i]=n%2;
        n=n/2;
    }

    cout<<"\n Binary number is :";
    for(i=i-1;i>=0;i--)
    {
    cout<<a[i];
    }
    
}