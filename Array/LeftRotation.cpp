#include<iostream>
using namespace std;

int main()
{
    
    int a[1000], n, i, j, k, temp;
    cout<<"\n Enter no. of elements :";
    cin>>n;

    cout<<"\n Enter elements :";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"\n Enter no. of times to be rotated :";
    cin>>k;
    for(j=1;j<=k;j++)
    {
    temp=a[0];
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[i]=temp;
    }

     for(i=0;i<n;i++){
    cout<<"\n Left Rotated elements are :"<<a[i]<<"\n";
    cout<<endl;
    }
}
    
