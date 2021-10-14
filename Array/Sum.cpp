#include<iostream>
using namespace std;

int main()
{
    
    int a[1000], n, i, j, sum=0;
    cout<<"\n Enter no. of elements :";
    cin>>n;

    cout<<"\n Enter elements :";
    for(i=0;i<n;i++)
    cin>>a[i];

    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<"Sum is"<<sum;
}