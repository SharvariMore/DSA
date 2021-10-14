#include<iostream>
using namespace std;

int main()
{
    int a[20],b[20],c[20];
    int i, j=0, k=0, n;
    cout<<"\n Enter no. of elements :";
    cin>>n;
    cout<<"\n Enter elements :";
    for(i=0;i<n;i++)
    cin>>a[i];

    for(i=0;i<n;i++)
    {
    if(a[i]%2==0)
    {
        b[j]=a[i];
        j++;
    }
    else
    {
        c[k]=a[i];
        k++;
    }
    }

    cout<<"\nEven array is :"<<endl;
    for(i=0;i<j;i++)
    cout<<b[i];

    cout<<"\nOdd array is :"<<endl;
    for(i=0;i<k;i++)
    cout<<c[i];
}