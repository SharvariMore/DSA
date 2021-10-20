#include<bits/stdc++.h>
using namespace std;

void Sort012(int a[],int arr_size)
{
    int low = 0;
    int mid = 0;
    int high = arr_size - 1;

    while (mid<=high)
    {
        switch (a[mid])
        {
        case 0:                           //if element is 0
            swap(a[low++],a[mid++]); 
            break;

        case 1:                          //if element is 1
            mid++;
            break;

        case 2:                         //if element is 2
            swap(a[mid],a[high--]);
            break;
        
        }
    }
    
}

void printArray(int arr[],int arr_size)
{
    for (int i = 0; i < arr_size; i++)
        cout<<arr[i]<<" ";
    
}

int main()
{
    int arr[] = {0,1,1,0,1,2,1,2,0,0,0,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    Sort012(arr,n);

    cout<<"\n Array after sorting is : ";

    printArray(arr,n);

    return 0;
}