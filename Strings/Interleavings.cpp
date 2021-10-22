#include<bits/stdc++.h>
using namespace std;

void Interleavings(char *str1, char *str2, char *res, int m, int n, int i)
{
    if (m==0 && n==0)                 //if all chars of both strings are included in o/p string then print o/p string
    {
        cout<<res<<endl;
    }

    if (m!=0)                        //if some part is remaining from 1st string to be included,then include the 1st char from the remaining char & recur for rest
    {
        res[i] = str1[0];
        Interleavings(str1+1,str2,res,m-1,n,i+1);
    }

     if (n!=0)                       //if some part is remaining from 2nd string to be included,then include the 1st char from the remaining char & recur for rest
    {
        res[i] = str2[0];
        Interleavings(str1,str2+1,res,m,n-1,i+1);
    }
    
}

void Print(char *str1, char *str2, int m, int n)
{
    char *res = new char[((m+n+1)*sizeof(char))];  //allocate memeory

    res[m+n] = '\0';                               //set terminator for o/p string

    Interleavings(str1, str2, res, m, n, 0);      //print interleavings

    free(res);                                    //free memory to avoid memory leak
}

int main()
{
    char str1[] = "AB";
    char str2[] = "CD";
    Print(str1, str2, strlen(str1), strlen(str2));

    return 0;
}