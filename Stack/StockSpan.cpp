#include<bits/stdc++.h>
using namespace std;

void stockSpan(int price[], int n, int Span[])
{
    Span[0] = 1;  //span value of first day is 1 by default

    for (int i = 0; i < n; i++)   //calculate span value for remaining days linearly by going through previous days
    {
        Span[i] = 1;     //initialise span value

        for (int j = i-1;(j>=0) && (price[i] >= price[j]); j--)    //traverse left while next element on left is smaller than price[i]
            Span[i]++;     //increment the span value while elements on left side are smaller
        
    }
    
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout<<arr[i]<< " ";
}

int main()
{
    int price[] = {100, 80, 60, 70, 60,75, 85};
    int n = sizeof(price)/sizeof(price[0]);
    int Span[n];

    stockSpan(price, n, Span);

    printArray(Span, n);

    return 0;
    
}