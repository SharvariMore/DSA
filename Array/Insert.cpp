#include<iostream>
using namespace std;

int main()
{
    int a[100], n, i, position, value;
    cout<<"\nEnter no. of elements :";
    cin>>n;

    cout<<"\nEnter elements :";
    for(i=0;i<n;i++)
    {
    cin>>a[i]; 
    }
    cout<<"\nEnter position :";
    cin>>position;

    cout<<"\nEnter value :";
    cin>>value;

    for(i=n-1;i>=position-1;i--)
    {
    a[i+1] = a[i];
    }
    
    a[position-1] = value;

    cout<<"\nResultant array is :"<<endl;
    for(i=0;i<=n;i++)
    {
    cout<<a[i]<<" ";
    }
    cout<<endl;
    
    return 0;

}