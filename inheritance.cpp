#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

//single level inheritance
/*
class animal{
    public:
    void info(){
        cout<<"i am animal"<<endl;
    }
};
class dog : public animal    //deriving child class from parent class
{
    public:
    void bark(){
        cout<<"i can bark"<<endl;
    }
};
int main()
{
    dog d;
    d.info();    //calling function of parent class with the object of child class
    d.bark();
    return 0;
}

*/

/*
class animal{
    public:
    void info(){
        cout<<"i am animal"<<endl;
    }
};
class dog : public animal    //deriving child class from parent class
{
    public:
    void bark(){
        cout<<"i can bark"<<endl;
    }
};
class cat : public dog   //this is a type of multi level inheritance
{
    public:
    void meow(){
        cout<<"i can meow"<<endl;
    }
};
int main(){
    cat c;
    c.info();
    c.bark();
    c.meow();
}

*/

class animal{
    public:
    void info(){
        cout<<"i am animal"<<endl;
    }
};
class dog : public animal    //deriving child class from parent class
{
    public:
    void bark(){
        cout<<"i can bark"<<endl;
    }
};
class cat : public animal   //this is a type of hierarchical inheritance
{
    public:
    void meow(){
        cout<<"i can meow"<<endl;
    }
};
class pig : public animal    //this is a type of hierarchical inheritance
{
    public:
    void oink(){
    cout<<"i do oink oink"<<endl;
 }
};
int main(){
    cat c;
    pig p;
    c.info();
    c.meow();
    p.info();
    p.oink();
    // p.bark(); will throw error 
     
}