#include<bits/stdc++.h>
using namespace std;

void insertSort(int arr[], int n)
{
    int i, key, j;
    for (i = 0; i < n; i++)
    {
        
        key = arr[i];

        j = i - 1;

        while (j >=0 && arr[j] > key)    /* Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position */
        {
            arr[j+1] = arr[j];           //check for next unsorted element 
            j = j - 1;                  //if found move element to right in sorted order
        }

        arr[j+1] = key;
    }
    
}

int main()
{
    int myArr[50], num;
    cout<<"\n Enter no. of elements in array: ";
    cin>>num;
    cout<<"\n Enter "<<num<<" elements in array: \n";
    for (int i = 0; i < num; i++)
    {
        cin>>myArr[i];
    }
    insertSort(myArr, num);
    cout<<"\n Sorted array is : \n";
    for (int i = 0; i < num; i++)
    {
        cout<<myArr[i]<<"\t";
    }

   return 0; 
}