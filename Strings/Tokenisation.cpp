#include<iostream>
#include<cstring>
#include<vector>
#include<sstream>                      //accept << and >> operators % act as a buffer
using namespace std;

int main()
{
    string input;
    getline(cin,input);

    stringstream ss(input);

    string token;
    vector <string> tokens;
    while(getline(ss,token,' ')){
    tokens.push_back(token);
    }

    for(auto token : tokens) 
    cout<<token<<",";

    return 0;
}