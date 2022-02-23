#include<iostream>
using namespace std;

void merge(int *, int, int, int);

void merge_sort(int *arr, int low, int high)
{
    int mid;
    if(low < high)
    {
        mid = (low + high)/2;                 //divide the array in middle
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, high, mid);                //combine sorted arrays
    }
}

void merge(int *arr, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)             //check for size of array
    {
        if(arr[i] < arr[j])                   //check if 1st  list is having lower value than 2nd list
        {
            c[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            c[k] = arr[j];
            k++;
            j++;   
        }
        
    }

    while (i <= mid)                     //check if remaining elements present in 1st list
    {
        c[k] = arr[i];
        k++;
        i++;   
    }

    while (j <= high)                   //check if remaining elements present in 1st list
    {
        c[k] = arr[j];
        k++;
        j++;
    }
    
    for (int i = low; i < k; i++)
    {
        arr[i] = c[i];
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
    merge_sort(myArr, 0, num - 1);
    cout<<"\n Sorted array is : \n";
    for (int i = 0; i < num; i++)
    {
        cout<<myArr[i]<<"\t";
    }

   return 0; 
}

