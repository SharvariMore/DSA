#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int trappedWater(vector <int> heights)
{
    int n = heights.size();    //No trapped water
    if (n<=2)
    {
        return 0;
    }

    vector<int> left(n,0), right(n,0);
    left[0] = heights[0];                //Count height from left(start)
    right[n-1] = heights[n-1];           //Count height from right(end)

    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i-1],heights[i]);              //Count max height from left(start) to end
        right[n-i-1] = max(right[n-i],heights[n-i-1]);    //Count max height from right(end) to start
    }

     int water = 0;
    for (int i = 0; i < n; i++)
    {
       
        water += min(left[i],right[i]) - heights[i];      //Count amount of trapped water in open spaces by subtracting height of width bar=1 from min of left & right
    }
    
    return water;
}

int main()
{
    vector <int> water{0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trappedWater(water)<<endl;

    return 0;
}

