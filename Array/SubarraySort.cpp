#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

bool OutofOrder(vector <int> arr, int i)      //Check element at peak
{
    int x = arr[i];
    if (i==0)                            //Check element at 0th position
    {
        return x > arr[1];
    }
    if (i==arr.size()-1)                 //Check element at last position
    {
        return x < arr[i-1];
    }
    return x>arr[i+1] or x<arr[i-1];
}

pair <int,int> subarraySort(vector <int> arr)
{
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        int x = arr[i];

        if (OutofOrder(arr,i))
        {
            smallest = min(smallest,x);     //Check min element at left
            largest = max(largest,x);       //Check max element at right
        }
    }
    
    if (smallest==INT_MAX)            //if array is already sorted
    {
        return{-1,-1};
    }
    
    int left = 0;                          //Check for 1st index position from left
    while (smallest >= arr[left])
    {
        left++; 
    }

     int right = arr.size()-1;            //Check for 2nd index position from right
    while (largest <= arr[right])
    {
       right--;
    }
    
    return{left,right};                 //Return both index poistions in which the elements needs to be sorted
    
}

int main()
{
    vector<int> arr = {1,2,3,4,5,8,6,7,9,10,11};
    auto p = subarraySort(arr);
    cout<<p.first<<" & "<<p.second<<endl;

    return 0;
}