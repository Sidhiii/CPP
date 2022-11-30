#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
//program of an user defined datatype


//enum is a user defined datatype consisting of integral constants
//(integral costants are variables that are evaluated at complie time)

enum week{monday,tuesday,wednesday,thursday,friday,saturday,sunday};
//enum=datatype & week=variable
int main()
{
    week today; //assigning value to variable "week"
    today=tuesday;

    cout<<"It is the "<<today+1<<" day of the week"; //+1 because index starts from 0
    return 0;
}