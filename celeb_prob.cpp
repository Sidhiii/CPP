//party of N people. only one person is known by everyone but doesn't know anyone. 
//1. push 1st 
//2. pop 2nd to 1st 
//3. insert back the one who survives
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include<deque>
using namespace std;


int main()
{
    int n=4;
    int celeb [][4]={ 
                        {0,1,0,1},
                        {0,0,0,0},
                        {0,1,1,0},
                        {1,1,1,0},

                     };
    deque <int> myDeque;
    for (int i = 0; i < n; i++)
    {
        myDeque.push_back(i);
    }
    while(myDeque.size()!=1)
    {
        int top1=myDeque.back();
        myDeque.pop_back();
        int top2=myDeque.back();
        myDeque.pop_back();
        if(celeb[top1][top2]==1)
        {
            myDeque.push_back(top2);  //top1 knows top2 hence top1 is not the celeb
        }
        else{
            myDeque.push_back(top1); //top1 doesnt know top2 hence top2 is not the celeb
        }
    }
    int last1=myDeque.front();
    bool isceleb=true;
    for(int i=0; i<n; i++)
    {
        if(last1==i){
            continue;
            
        }
        if(celeb[last1][i]==1){
                isceleb=false;
        }
        if(celeb[i][last1]==0){
            isceleb=false;
        }
    }
    if(isceleb){
        cout<<last1;
    }
    else{
        cout<<"no one is celeb";
    }
}