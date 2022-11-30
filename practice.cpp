#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{
   int n;
   cin>>n;
   for(int i=1; i<=n; i++){
    for (int j = 1; j <=n; j++)
    {
       if(j<=i)
        cout<<j;
       
       else
        cout<<" ";
       
    }


    for (int k = n; k>=1; k--)
    {
        if(k<=i)
        cout<<k;
        else
        cout<<" ";
    }
    
    cout<<endl;
   } 
    
}