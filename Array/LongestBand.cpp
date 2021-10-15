#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int LongestBand(vector <int> arr)
{
    int n = arr.size();    
    unordered_set<int> s;

    for(int x : arr)  //Insert element in set
    {
        s.insert(x);
    }

    int largestLen = 1;

    for(auto element : s)   //Iterate over each element
    {
        int parent = element - 1;    //Check for previous element

        if (s.find(parent)==s.end())      //Check for abs diff=1
        {
            int next_no = element + 1;     //Check for next element
            int cnt = 1;
        
        while(s.find(next_no)!=s.end())         //if abs diff!=1
        {
            next_no++;
            cnt++;
        }
        while(cnt>largestLen)       //Check count of longest band
        {
            largestLen = cnt;
        }
        }
    }
    return largestLen;
}

int main()
{ 
    vector<int> arr{1,9,3,0,18,5,2,4,10,7,12,6};
    cout<<LongestBand(arr)<<endl;

    return 0;

}