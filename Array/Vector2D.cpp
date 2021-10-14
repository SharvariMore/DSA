#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector <int>> arr = {
        {1,2,3},
        {4,5,6},
        {7,8,9,10},
        {11,12}
    };

    //Update the values at 0th row 1st column
    arr[0][1]+=13;

    for (int i = 0; i < arr.size(); i++)
    {
        for(int number : arr[i])
        {
            cout<<number<<","<<endl;
        }
    }
    return 0;
}