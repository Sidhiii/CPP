#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <deque>    //import the container library
using namespace std;


// int main()
// {
//     deque<int> myDeque(5); //creating a deque with 5 elements.... if we add -1 it means all the 5 values are initializes as -1
//     cout<<"Deque: ";
//     for (int i : myDeque)  //inhanced for loop, from where the value is taken(myDeque)and what is the value(i)
//     {
//         cout<<i<<" ";
//     }
//     cout<<"\nsize : "<<myDeque.size();
//     myDeque.push_back(123);  //adds 123 to the end
//     myDeque.push_front(99);  //adds 99 at the front
//     cout<<"\nValue at front: "<<myDeque.front();
//      cout<<"\nValue at back: "<<myDeque.back();
//    //deque

int main(){
    deque<int>d;
d.push_back(1);
d.push_front(2);
//d.pop_front();
cout << endl;
cout <<"Print First Index Element->"<< d.at(1)<< endl;
cout <<"front"<< d.front()<< endl;
cout <<"back"<< d.back()<< endl;
cout <<"Empty or not" << d.empty()<< endl;
cout <<"before erase" << d.size()<< endl;
d.erase(d.begin(),d.begin()+1);
cout <<"after erase"<< d.size()<< endl;
for(int i:d){
cout << i << endl;
}
}

    
