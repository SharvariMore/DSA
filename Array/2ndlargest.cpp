#include<iostream>
#include<limits>
using namespace std;

int main()
{
    int a[100], n, i, l1, l2;
    cout<<"\n Enter no. of elements :";
    cin>>n;

    cout<<"\n Enter elements :";
    for(i=0;i<n;i++)
    cin>>a[i];

    l1=INT_MIN;
    l2=INT_MIN;

    for(i=0;i<n;i++)
    if (a[i]>l1)
    {
        l2=l1;
        l1=a[i];
    }
    else if (l2>a[i] && l1<a[i])
    {
        l2=a[i];
    }

    cout<<"\n First largest element is :"<<l1;
    cout<<"\n Second largest element is :"<<l2;
}
    
    
