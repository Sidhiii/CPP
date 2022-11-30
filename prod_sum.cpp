#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

class sol{
    public:
    int pro(int n){
        int prod = 1;
        int sum = 0;
        while(n!=0){
            int digit = n%10;
            prod= prod*digit;
            sum = sum + digit;

           n = n/10;
        }
        int ans = prod-sum;
        return ans;
    }

};

int main()
{
    cout<<pro(234);
    return 0;
}