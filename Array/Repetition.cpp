#include<iostream>
#include<limits>
using namespace std;

int main()
{
    int a[100], n, i, c, j;
    cout<<"\n Enter no. of elements :";
    cin>>n;

    cout<<"\n Enter elements :";
    {
    for(i=0;i<n;i++)
    cin>>a[i];
    }

    for(i=0;i<n-1;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
        
        if(a[i]==0)
        continue;
        if (a[i]==a[j])
        {
            c++;
            a[j]=0;
        }
        
    }
    if(c>1)
    cout<<a[i]<<"Repeated is :"<<c<<"times"<<endl;
    }
}