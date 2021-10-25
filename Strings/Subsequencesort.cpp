#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

void Subsequence(string s, string o, vector <string> &v)
{
    if (s.size()==0)           //check if string is null & pass it to output string 
    {
        v.push_back(o);
        return;
    }
    
    char ch = s[0];                         //include from 1st char in string
    string reduced_input = s.substr(1);     //include all elements in string from starting position

    Subsequence(reduced_input,o+ch,v);     //includes 1st char

    Subsequence(reduced_input,o,v);       //excludes 1st char
}

bool Compare(string s1, string s2)
{
    if(s1.length()==s2.length()){
      return s1<s2;                          //return  lexographical order
    }
    return s1.length()<s2.length();
}

int main()
{
    string s;
    cin>>s;
    string output="";
    vector <string> v;
    Subsequence(s,output,v);

    sort(v.begin(),v.end(),Compare);           //sort strings in vector

    for(auto s : v){
     cout<<s<<",";
    }

    return 0;
}