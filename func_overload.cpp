#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

//when 2 or more functions have same name within the class but different no. of parameters it is called function overloading

class add{
    public:
    int sum(int a, int b){
        return a+b;
    }
    int sum(int a, int b, int c){
        return a+b+c;
    }
};

int main()
{
    add a;
    cout<<"the sum is "<<a.sum(3,4)<<endl;
    cout<<"the sum is "<<a.sum(3,4,5)<<endl;
    return 0;
}