#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;

bool isValid(string expression)
{
    stack <char> s;
    for(int i=0;i<s.size();i++)
    {
        char ch= expression[i];
        if(ch=='(' || ch==')')
        {
            if(ch=='(')
            {
                s.push(ch);
            }
            else{
                if(s.empty() || s.top()==')')
                {
                    s.push(ch);
                }
                else{
                    if(s.top()=='(')
                    {
                        s.pop();
                    }
                }
            }
        }
    }
    if(s.empty())
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    string ex="()()()()";
    isValid(ex);

    return 0;
}