#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

class rectangle{
    private:
    int length;
    int breadth;
    public:
      void setl(int l){
        length=l;
    }
    int getl(){
        return length;
    }
   void setb(int b){
        breadth=b;
    }
    int getb(){
        return breadth;
    }
 
    int calarea(){
        return length*breadth;
    }

};

int main()
{
    rectangle r;
    r.setl(3);
    r.setb(5);
    cout<<"length is "<<r.getl()<<endl;
    cout<<"Breadth is"<<r.getb()<<endl;
    cout<<"the area is "<<r.calarea();

    return 0;
}