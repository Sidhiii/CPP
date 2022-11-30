#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include<deque>
using namespace std;


int main()
{
    int arr[]={1,2,3,1,4,5,2,3,6};
    int n = 9;
    int k = 3;
    deque<int> storage;  //stores the indices of useful numbers
    for (int i = 0; i < n; i++)
    {
        int currNum = arr[i];

        //remove all numbers outside the frame of vvalue k
        while(storage.front()<(i-k)){
                storage.pop_front();
        }

         //keep removing all values smaller than current number from the back
        while(storage.empty() && storage.back()< currNum){
           
            storage.pop_back();
        }
        storage.push_back(currNum);
        
    }
    
    return 0;
}