#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
#include<map>
using namespace std;


/*
void print(map<int, string> &m)
{
    cout<<"size: "<<m.size()<<endl;
    for(auto &a :m){
        cout<<a.first<<" "<<a.second<<endl;
    }
}
int main()
{
    map<int,string> m;
    m[3]="cutie"; //O(log(n))
    m[1]="sidhi";

    //m["abc"]="abc"     time complexity is string.size * log(n)
    m.insert({2,"sethi"});
    auto it= m.find(2);
    m.erase(it);
    print(m);
    return 0;
}

*/
/*
//print the string n its frequency in lexiographical order
int main(){
    map<string,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    for (auto a:m)
    {
        cout<<a.first<<" "<<a.second<<endl;
    }
}
*/
//Given N strings and Q queries.
//In each query you are given a string
//print frequency of that string

int main(){
    unordered_map<string,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }
}