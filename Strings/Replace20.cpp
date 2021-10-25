#include<iostream>
#include<cstring>
using namespace std;

void replace20(char *str)
{
    int spaces = 0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]==' ')      //if space found between 2 words search for next spaces too
        {
            spaces += 1;
        }
        
    }

    int index = strlen(str) + 2*spaces;     //return length of current string + spaces*2
    str[index] = '\0';                      

    for (int i = strlen(str)-1; i >= 0; i--)    //go to end of string
    {
        if (str[i]==' ')               //if space found replace with 20% between 2 words for the space
        {
            str[index - 1] = '0';     
            str[index - 2] = '2';      
            str[index - 3] = '%';      
            index = index - 3;
        }
        else
        {
            str[index - 1] = str[i];   //if space not found move to next word & decrement index
            index--;
        }
        
    }
    
}

int main()
{
    char input[10000];
    cin.getline(input,1000);
    replace20(input);
    cout<<input<<endl;

    return 0;

}
