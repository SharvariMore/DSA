#include<bits/stdc++.h>
using namespace std;

void Permute(string a, int l, int r)
{
    if (l==r)
    {
        cout<<a<<endl;
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(a[l],a[i]);         //swapping done for first index

            Permute(a,l+1,r);        //recursion called for rearrangement of elements

            swap(a[l],a[i]);        //backtracking(use recursion until finding the best result)
        }
        
    }
}

int main()
{
    string str = "ABCD";
    int n = str.size();
    Permute(str,0,n-1);
    return 0;
}