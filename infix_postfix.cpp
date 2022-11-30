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
string intopost(string s)
{
    stack<char> st;
    string result;
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
            while(st.top()!='(')
            {
                result+=st.top();
                st.pop();
            }
            st.pop();
        }
        else {
             while(!st.empty() && prec(st.top())>=prec(s[i]))
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
    return result;

}
int main()
{
    cout<<intopost("a+b*(c^d-e)^(f+g*h)-i")<<endl;
    //abcd^e-fgh*+^*+i-
    return 0;
}