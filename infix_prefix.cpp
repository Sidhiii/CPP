#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;

int prec(char c)
{
    if(c=='^')
    {
        return 3;
    }
    else if(c=='*' || c=='/')
    {
        return 2;
    }
    else if(c=='+' || c=='-')
    {
        return 1;
    }
    else{
        return -1;
    }
}
string intopre(string s)
{
    reverse(s.begin(),s.end());
    stack<char> st;
    string result;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            s[i] = ')';
        }
        else if (s[i] == ')') {
            s[i] = '(';
        }
    }
    for(int i=0;i<s.length();i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') ||(s[i]>='0' && s[i]<='9'))
        {
            result+=s[i];
        }
        else if(s[i]=='(')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            while(st.top()!='(' && (!st.empty()))
            {
                result+=st.top();
                st.pop();
            }
            st.pop();
        }
        else {
             while(!st.empty() && prec(st.top())>prec(s[i]))
             {
                result+=st.top();
                st.pop();
             }
             st.push(s[i]);
        }
    }
    while(!st.empty())
    {
        result+=st.top();
        st.pop();
    }
    reverse(result.begin(),result.end());
    return result;

}
int main()
{
    cout<<intopre("(a -b/c) * (a /k - l)")<<endl;
    //*-a/bc-/akl
    return 0;
}