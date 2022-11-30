#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{
    int n, rev = 0, temp;
    cin>>n;

    temp = n;
    while (n!=0)
    {
       rev = rev * 10;
       rev = rev + n%10;
       n = n/10;

       
    }
    if (temp == rev)
    {
        cout<<"Number is Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
  
}