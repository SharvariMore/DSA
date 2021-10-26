#include<iostream>
#include<unordered_map>
using namespace std;

string Uniquesubstring(string str)
{
    int i = 0, j = 0, window_len = 0, max_window_len = 0, start_window = -1;

    unordered_map<char,int> m;   //using hashmap

    while (j < str.length())    //traverse string till end
    {
        char ch = str[i];       //check for every char in string

        if (m.count(ch) && m[ch]>=i)     //if it is inside hashmap & it's index >= start of cureent window
        {
            i = m[ch] + 1;
            window_len = j - i;         //update remaining window length excluding current char
        }

        m[ch] = j;                    //update last occurence
        window_len++;
        j++;

        if (window_len > max_window_len)           //update max window len at every step
        {
            max_window_len = window_len;
            start_window = i;
        }
        
        
    }
    
    return str.substr(start_window,max_window_len);     //if char is already present in window = start new window else if not present extend window
    
}

int main()
{
    string input;
    cin>>input;

    cout<<"\n Unique substring is : "<<Uniquesubstring(input)<<endl;

    return 0;
}