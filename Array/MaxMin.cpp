#include<iostream>
#define MAX_SIZE 100
using namespace std;

int main()
{
    int arr[MAX_SIZE];
    int i,max,min,size;

    cout<<"\n Enter no. of elements : ";
    cin>>size;

    cout<<"\n Enter elements : ";
    for (i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    max = arr[0];
    min = arr[0];

    for (i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout<<"\n Maximum value is : "<<max;
    cout<<"\n Minimum value is : "<<min;

    return 0;
}

