#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //Initialise vector
    vector <int> arr = {1,2,3,4,5};

    //Fill in constructor
    vector<int> arr1(10,5); //10: number, 5: value

    //Add the elements from end in array
    arr.push_back(6);

    //Remove the elements from end in array
    arr.pop_back();

    //Print no. of elements in array
    cout<<"\n Size of array is : "<<arr.size();

    //Print memory of an array
    cout<<"\n Capacity of array is : "<<arr.capacity();

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<"\n Array elements are : "<<arr[i];
    }

    //Iterating over each element in array
    for(int x : arr1){
        cout<<"\n"<<x<<","<<endl;
    }
    
}