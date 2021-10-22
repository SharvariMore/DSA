#include<bits/stdc++.h>
using namespace std;

#define OUT 0              //seperator is seen
#define IN 1               //word character is seen

unsigned Wordcount(char *str)
{
    int state = OUT;
    unsigned wc = 0;

    while (*str)
    {
        if(*str==' ' || *str=='\n' || *str=='\t')          //if a seperator move out 
        state = OUT;
    
    
    else if (state==OUT)                                  //if not a seperator move in & increment word count 
    {
        state = IN;
        ++wc;
    }
    
    ++str;                                     //move to next character
    }
     return wc;
    
}

int main(void)
{
    char str[] = "This is a C++ problem Okay!";
    cout<<"\n No. of words in string is : "<<Wordcount(str);
    return 0;
}