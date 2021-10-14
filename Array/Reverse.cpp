#include<iostream>
using namespace std;

int main()
{
    int a[100], n, i;
    cout<<"\n Enter no. of elements :";
    cin>>n;

    cout<<"\n Enter elements :";
    for(i=0;i<n;i++)
    cin>>a[i];

    cout<<"\n Reverse order is :";
    for(i=n-1;i>=0;i--)
    cout<<a[i]<<"";
    cout<<endl;
}