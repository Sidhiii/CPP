#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include<vector>
using namespace std;


int main()
{
    vector <int> num={1,2,3,4,5};
    for(auto i:num)
    {
        cout<<"number is "<<i<<endl;
    }
     for(auto i=num.begin();i != num.end();i++)
        {
            cout<<*i<<" ";
        }
        cout<<endl;
     for(auto i=num.rbegin();i != num.rend();i++)
        {
            cout<<*i<<" ";
        }
    return 0;
}