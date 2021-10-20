#include<iostream>
using namespace std;

void Push0toEnd(int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
        if (arr[i]!=0)
            arr[count++] = arr[i];
        
    while (count<n)
        arr[count++] = 0;
        
}

int main()
{
    int arr[] = {1,9,8,4,0,0,2,7,0,6,0,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    Push0toEnd(arr,n);

    cout<<"\n Array after pushing all 0's to end of array : ";
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    
}