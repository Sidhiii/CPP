#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

//creating a basic class 

class employee{
    string name; // these are private variables
    int id;
    public:
    void getdata();
    void displaydata(); // creating function to access private variables outside the class

};
void employee::getdata() //defining the function outside the class with scope resolution operator
{
    cout<<"enter the name and the id"<<endl;
    cin>>name;
    cin>>id;
}
void employee::displaydata()
{
    cout<<"the name of the employee is "<<name<<endl;
    cout<<"the id of the employee is "<<id<<endl;
}

int main()
{
    employee e;  //creating an object of the class
    e.getdata();
    e.displaydata();
    return 0;
}