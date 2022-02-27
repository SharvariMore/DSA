#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectSort(int arr[], int n)
{
    int i, j, min_index;

    for (i = 0; i < n-1; i++)         //go until end for unsorted array
    {
        min_index = i;  
        for (j = i+1; j < n; j++)                  //find min element in unsorted array         
         if (arr[j] < arr[min_index])
          min_index = j;

          swap(&arr[min_index],&arr[i]);           //swap current min element with 1st element in array
        
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
    selectSort(myArr, num);
    cout<<"\n Sorted array is : \n";
    for (int i = 0; i < num; i++)
    {
        cout<<myArr[i]<<"\t";
    }

   return 0; 
}