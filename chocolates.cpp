#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <set>
#include<cmath>
using namespace std;


int main()
{
    multiset<int> arr{25,9,100,36,81};

    int k=5;
    int sum=0;
    // int i=0;
    for(int i=0;i<k;i++)
    {
       
        
        int num = *(--arr.end());
        arr.erase(--arr.end());
        arr.insert((int)sqrt(num));
    }
         for (int i : arr)
        {
          // cout<<i<<" ";
            sum=sum+i;
            
        }
        cout<<sum;
        cout<<endl;
   
    return 0;
}