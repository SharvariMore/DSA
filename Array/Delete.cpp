#include<iostream>
using namespace std;

int main()
{
    int a[100], n, i, position;
    cout<<"\nEnter no. of elements :";
    cin>>n;

    cout<<"\nEnter elements :";
    for(i=0;i<n;i++)
    {
    cin>>a[i]; 
    }
    cout<<"\nEnter position :";
    cin>>position;

    if(position>=n+1)
    {
        cout<<"\nDeletion not possible!";
    }
    else{
    for(i=position-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    cout<<"\nResultant array is :"<<endl;
    for(i=0;i<n-1;i++)
    {
    cout<<a[i]<<" ";
    }
    cout<<endl;
    }
    
    return 0;
}
