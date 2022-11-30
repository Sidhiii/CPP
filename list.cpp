#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include<list>
#include<iterator>
using namespace std;


//functions of lists
void showlist( list <int> g){

    list<int>:: iterator it;
    for (it = g.begin(); it != g.end() ; it++)
    {
       cout<<*it<<" ";
    }
    cout<<endl;
    
}

int main()
{
    list <int> list1, list2;
    for (int i = 0; i < 10; i++)
    {
        list1.push_back(i*2);
        list2.push_front(i*3);
    }
    cout<<"List1 is ";
    showlist(list1);

      cout<<"List2 is ";
    showlist(list2);

    cout<<"list1.front()";
    showlist(list1);
    cout<<endl;
    cout<<"list2.back()";
    showlist(list2);
    cout<<endl;
    cout<<"reverse ";
    list1.reverse();
    showlist(list1);
    cout<<"sorted ";
    list2.sort();
    showlist(list2);


    return 0;
}