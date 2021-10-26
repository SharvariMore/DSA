#include<iostream>
using namespace std;

void Housing(int *arr, int n, int k)
{
    int i = 0, j = 0, current_sum = 0;

    while (j<n)                   //Expand to right(go next)
    {
        current_sum += arr[j];
        j++;

    while (current_sum > k && i<j)                  //Remove elements from left until current_sum > k & i<j
    {
        current_sum = current_sum  - arr[i];
        i++;
    }

    if (current_sum == k)                           //if sum of elements at given index matches target(k)
    {
        cout<<"\n Indexes are : "<<i<<" - "<<j-1<<endl;
    }
    
    }
    return;

}

int main()
{
    int plots [] = {1,3,2,1,4,1,3,2,1,1};
    int n = sizeof(plots)/sizeof(int);
    int k;
    cout<<"\n Enter k : ";
    cin>>k;

    Housing(plots,n,k);

    return 0;
}