#include<iostream>
using namespace std;

int BinarySearch(int [], int, int);

int main()
{
    int a[100], n, i, index, num;
    cout<<"\n Enter array size : ";
    cin>>n;
    cout<<"\n Enter array elements : ";
    for(i=0;i<n;i++)
        cin>>a[i];

    cout<<"\n Enter element to be found : ";
    cin>>num;

    index = BinarySearch(a, n, num);

    if (index == -1)
        cout<<"\n Element not Found!";
    else
        cout<<"\n Element is found at index : "<<(index + 1);

    return 0;
}

int BinarySearch(int a[], int n, int num)
{
    int low, mid, high;
    low = 0;                        //start from first
    high = n - 1;                   //start from last
    while (low <= high)
    {
        mid = (low + high) / 2;     //Divide the array into half
        if (num == a[mid])          //if element to be found is mid itself then return mid
            return mid;
        else if (num < a[mid])       
            high = mid - 1;        //if element to be found is less than mid then go to left 
            else
            low = mid + 1;        //if element to be found is greater than mid then go to right
    }
    
    return -1;                  //element not found when low>high
}
    