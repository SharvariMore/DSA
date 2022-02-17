#include<bits/stdc++.h>
using namespace std;

bool balanceParenthesis(string expr)
{
    stack <char> s;
    char x;

    for (int i = 0; i < expr.length(); i++)
    {
        if(expr[i] == '('  || expr[i] == '[' || expr[i] == '{')    //starting parenthesis
        {  
            s.push(expr[i]);
            continue;
        }

        if(s.empty())
         return false;

         switch (expr[i])                     //pop the closing parenthesis to check whether it matches the starting parenthesis
         {
         case ')':
             x = s.top();                
             s.pop();
             if(x == '{' || x == '[')
              return false;
             break;

        case ']':
             x = s.top();
             s.pop();
             if(x == '(' || x == '{')
              return false;
             break;

        case '}':
             x = s.top();
             s.pop();
             if(x == '(' || x == '[')
              return false;
             break;
         
         }
    }
  return (s.empty());  

}

int main()
{
    string expr;
    cout<<"Enter string expression : ";
    cin>>expr;

    if(balanceParenthesis(expr))
     cout<<"\nBalanced!";
    else
     cout<<"\n Not Balanced!";

    return 0;
}