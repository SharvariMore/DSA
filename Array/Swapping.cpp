#include<iostream>
using namespace std;

int main()
{
    
    int a[100], n, i, temp;
    cout<<"\n Enter no. of elements :";
    cin>>n;

    cout<<"\n Enter elements :";
    {
    for(i=0;i<n;i++)
    cin>>a[i];
    }

    for(i=0;i<n;i+=2)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }

    for(i=0;i<n;i++)
    cout<<"\n Swapped elements are :"<<a[i]<<"\n";
    cout<<endl;
}