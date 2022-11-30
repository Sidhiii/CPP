#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

class a{
    protected:
    int a;
    public:
    void get_a(int n){
        a=n;
    }
};
class b{
    protected:
    int b;
    public:
    void get_b(int n){
        b=n;
    }
};
class c{
    protected:
    int c;
    public:
    void get_c(int n){
        c=n;
    }
};
class D:public a, public b, public c   //this is a type of multiple inheritance (3 classes combined in 1 child class)
{
    public:
    void display(){
        cout<<"the addition is "<<a+b+c;
    }
};
int main()
{
    D d;
    d.get_a(4);
    d.get_b(5);
    d.get_c(6);
    d.display();

    return 0;
}