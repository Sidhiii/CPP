#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include<queue>
using namespace std;

void showq(queue <int> q)
{
    queue<int> que=q;
    while(!que.empty()){
        cout<<que.front()<<" ";
        que.pop();
    }
}

int main()
{
    queue<int> qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    showq(qu);
    cout<<endl;
    qu.pop();
    showq(qu);
    return 0;
}