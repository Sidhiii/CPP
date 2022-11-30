#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{
    int arr[100], n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"enter the elements"<<endl;
        cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
          
            if(arr[i]==arr[j]){
                  cout<<"duplicate element is "<<arr[i]<<endl;
                  break;
            }
        }
        
    }
    
    return 0;
}