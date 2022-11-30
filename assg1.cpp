#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

/* question 1
int main()
{
    int n;
    cin>>n;

    switch(n){
    case 1: cout<<"January";
            break;
    case 2: cout<<"February";
            break;
    case 3: cout<<"March";
            break;
    case 4: cout<<"April";
            break;
    case 5: cout<<"May";
            break;
    case 6: cout<<"June";
            break;
    case 7: cout<<"July";
            break;
    case 8: cout<<"August";
            break;
    case 9: cout<<"September";
            break;
    case 10: cout<<"October";
            break;
    case 11: cout<<"November";
            break;
    case 12: cout<<"December";
            break;
    default:
    cout<<"No such month exists";

    } 
    return 0;
}
*/


/* 2nd question
int main(){
    int n;
    cin>>n;
    int c=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j= 0; j < i ; j++)
        {
            cout<<c;
            c++;
            
        }
        cout<<endl;
    }
    
}

*/

/* 3rd question 
int main(){
    int arr[100], n, search;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the element of the array"<<endl;
        cin>>arr[i];
    }
    cout<<"enter the element to search "<<endl;
    cin>>search;
    for (int i = 0; i <n; i++)
    {
        if(arr[i]==search){
            cout<<"element is present at position "<<i<<endl;
            break;
        }
       
    }
   if(arr[n]==n){
    cout<<"element is not present"<<endl;

   }
}
*/

/* 6th question
int main(){
    double n;
    cout<<"Enter the value: ";
    cin>>n;

    if(n<=5.0)
    {
        cout<<"little or no damage";
    }
    else  if(n<=5.5)
    {
        cout<<"Some damage.";
    }
    else if(n<=6.5){
        cout<<"Serious damage! wall may crack or fall.";
    }
    else if(n<=7.5){
        cout<<"Disaster!! Houses and buildings may collapse.";
    }
    else{
        cout<<"Catastrophic!!! most buildings destroyed.";
    }
}
*/

/* 4th question
int main(){
    int total = 30;
    int x=9;
    int a= (1+total*total + total)*x;
    cout<<a;

}
*/
/* 8th question
int main(){
    int number;
    int quantity;
    double sum=0;
   
    while(number!=-1){
         cout<<"Enter the number and quantity of the product"<<endl;
    cin>>number>>quantity;
            switch (number)
            {
            case 1: sum += (2.98*quantity);
                break;
            case 2: sum += (4.50*quantity);
                break;
            case 3: sum += (9.98*quantity);
                break;
            case 4: sum += (4.49*quantity);
                break;
            case 5: sum += (6.87*quantity);
                break;
            
            default: cout<<"No such value exists";
                break;
            }  
             cout<<"$"<<sum<<endl;
    }
    
}
*/


int main(){
    char n[]="hi hello";
    int i;
    for ( i = 0; n[i] !='\0'; ++i);
    {
        cout<<"length of string is "<<i<<endl;
    }
    
}