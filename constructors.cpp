#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;


//constructor is a special method which is called automatically when an object in a class is created
/*

class wall{
    int length;
    int breadth;
    public:
    wall(int l, int b)   //constructor has the same name as class 
    {
        length=l;
        breadth=b;
    }
    int calarea(){
        return length*breadth;
    }
};
int main()
{
    wall w(2,3);  //creating w object and assigning value to int l,b 
    cout<<"the area is "<<w.calarea();
    return 0;
} 

*/


//copy constructors

class wall{
    int length;
    int breadth;

    public:
    wall(int l, int b)
    {
        length=l;
        breadth=b;
    }
    wall (wall &obj)   //this a copy constructor that has all the finctions of the original constructor
    {
        length=obj.length;
        breadth=obj.breadth;
    }
    int calarea()
{
    return length*breadth;
}
};
int main(){
    wall w(2,3);
    wall w1=w;
    cout<<"the area is "<<w.calarea()<<endl;
    cout<<"the area from copied constructor is "<<w1.calarea();
}