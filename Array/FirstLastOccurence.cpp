#include<bits/stdc++.h>
using namespace std;

void FirstLastOccurence(int arr[], int n, int x)
{
    int first = -1, last = -1;
    for (int i = 0; i < n; i++)
    {
        if(x!=arr[i])
        continue;
        if(first==-1)
            first = i;
            last = i;
    }

    if (first!=-1)
        cout<<" First occurence is : "<<first
        <<" \n Last occurence is : "<<last;  
    else
   
        cout<<"\n Element not found!";
    
    
}

int main()
{
    int arr[] = {1,2,2,2,2,3,4,7,8,8};
    int n = sizeof(arr) / sizeof(int);
    int x = 8;
    FirstLastOccurence(arr,n,x);
    return 0;
}