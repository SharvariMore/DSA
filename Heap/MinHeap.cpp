#include<iostream>
#include<conio.h>
using namespace std;

void min_heap(int *a, int i, int n)
{
    int j,temp;           //j:parent node
    temp = a[i];         //i:current element in array
    j = 2*i;
    while (j<=n)
    {
     if(j<n && a[j+1] < a[j])      
       j = j + 1;
     if(temp < a[j])              //checking if temp is smaller than parent
       break;
     else if(temp >= a[j])        //checking if temp is greater than parent
     {
       a[j/2] = a[j];             //a[j/2]:child node, a[j]:parent node
       j = 2*j;                   //parent node is twice of child node
     }
    }
    a[j/2] = temp;                //store child element in temp
    return;
}

void build_minheap(int *a, int n)
{
    int i;
    for(i = n/2;i>=1;i--)        //checking child nodes iterating from end
    {
     min_heap(a,i,n);
    }
}

int main()
{
    int n, i;
    cout<<"\n Enter no. of elements :";
    cin>>n;
    int a[20];
    for(i=1;i<=n;i++)
    {
        cout<<"\n Enter element :"<<(i)<<endl;
        cin>>a[i];
    }
    build_minheap(a,n);
    cout<<"Min heap is\n";
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<endl;
    }
    getch();
}