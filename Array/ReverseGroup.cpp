#include<iostream>
using namespace std;

void Reversegroup(int arr[], int k, int n)
{
    for (int i = 0; i < n; i+=k)
    {
        int left = i;

        int right = min(i+k-1,n-1);   //k is not multiple of n

        while (left<right)
            swap(arr[left++],arr[right--]);
        
    }
    
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int k;
    cout<<"\n Enter k : ";
    cin>>k;
    int n = sizeof(arr) / sizeof(arr[0]);
    Reversegroup(arr,k,n);
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    
    return 0;
}