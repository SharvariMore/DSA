#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector <int>> TripletSum(vector <int> arr, int targetSum)
{
    int n = arr.size();
    vector<vector <int>> result;

    sort(arr.begin(),arr.end());

    for(int i=0;i<=n-3;i++)
    {
        int j = i + 1;
        int k = n - 1;

    while(j<k)
     {
        int currentSum = arr[i];
        currentSum += arr[j];
        currentSum += arr[k];

        if (currentSum==targetSum)
        {
            result.push_back({arr[i],arr[j],arr[k]});
            j++;
            k--;
        }
        else if (currentSum > targetSum)
        {
            k--;
        }
        else
        {
            j++;
        }
     }    
        
    }
    return result;
}

int main()
{
    vector <int> arr = {1,2,3,4,5,6,7,8,9,15};
    int S=18;

    auto result = TripletSum(arr,S);

    for (auto v : result)
    {
        for (auto no : v)
        {
           cout<<no<<",";
        }
        cout<<endl;
    }
    return 0;
    
}