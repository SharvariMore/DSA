#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int highMountain(vector <int> a)
{
    int n = a.size();

    int largest = 0;
    
    for(int i=1;i<=n-2;)  //Start from 1st element until 2nd last element
    {
        if(a[i]>a[i-1] && a[i]>a[i+1])    //Find th peak element
        {
            int cnt=1;
            int j=i;

            while(j>=1 && a[j]>a[j-1])          //count backward(left)
            {
                j--;
                cnt++;
            }
             while(i<=n-2 && a[i]>a[i+1])       //count forward(right)
            {
                i++;
                cnt++;
            }
        
        largest = max(largest,cnt);       //print largest of all peaks
        }
    
            else
            {
                i++;
            }

    }
    return largest;

}

int main()
{
    vector <int> arr{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
    cout<<highMountain(arr)<<endl;

    return 0;
}