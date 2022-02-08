#include<iostream>
using namespace std;

int main()
{
    int a[100], n, i, index,num;
    cout<<"\n Enter array size : ";
    cin>>n;
    cout<<"\n Enter array elements : ";
    for(i=0;i<n;i++)
        cin>>a[i];

    cout<<"\n Enter element to be found : ";
    cin>>num;
    for(i=0;i<n;i++)
    {
        if (a[i] == num)            //check serially in array if element is the element to be found
        {
            index = i;             //if element is found declare it's index in array
            break; 
        }
    }
    
    cout<<"\n Element found at index : "<<index;
    cout<<endl;

 return 0;
}