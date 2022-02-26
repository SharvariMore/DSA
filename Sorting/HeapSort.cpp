#include<iostream>
using namespace std;
 
 void heapify(int arr[], int n, int i)
 {
     int largest = i;             //root
     int l = 2*i + 1;
     int r = 2*i + 2;

     if(l < n && arr[l] > arr[largest])
        largest = l;

     if(r < n && arr[r] > arr[largest])
        largest = r;

     if (largest != i)
     {
         swap(arr[i], arr[largest]);   //if root is not largest
     

     heapify(arr, n, largest);
     }
     
 }

 void heapSort(int arr[], int n)
 {
     for(int i = n/2-1;i>=0;i--)            // build heap (rearrange array)
      heapify(arr, n, i);

     for (int i = n-1; i > 0; i--)         //one by one extract an element from heap
     {
         swap(arr[0], arr[i]);            //move current root to end

         heapify(arr, i, 0);             // call max heapify on the reduced heap
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
    heapSort(myArr, num);
    cout<<"\n Sorted array is : \n";
    for (int i = 0; i < num; i++)
    {
        cout<<myArr[i]<<"\t";
    }

   return 0; 
}