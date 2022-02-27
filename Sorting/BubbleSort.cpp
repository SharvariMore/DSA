#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for ( i = 0; i < n-1; i++)             //check until last element of array
        for (j = 0; j < n-i-1; j++)         // Last i elements are already in place
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);   //take 2 nos(prev, curr) & swap them in order
         
    
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
    bubbleSort(myArr, num);
    cout<<"\n Sorted array is : \n";
    for (int i = 0; i < num; i++)
    {
        cout<<myArr[i]<<"\t";
    }

   return 0; 
}