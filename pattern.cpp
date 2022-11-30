// #include <iostream>
// using namespace std;

// int main(){
//     int n =5;
//     // cin>>n;
//     int a = n;
//     for (int i = 1; i <=n; i++)
//     {
//         a = n;
//         for (int j = 0; j<=n - i; j++){
//         cout<<a;
//         a--;                                        //1st triangle
            
//         }


//         for (int k = 1; k < i; k++)
//         {
//             cout<<"*";                              //2nd triangle
//         }


//         for (int y = 1; y < i; y++)
//         {
//             cout<<"*";
//         }
        

//         for (int x = i; x <= n; x++)
//         {
//             cout<<x;                                //4th triangle
//         }
        
        
//         cout<<endl;
        
//     }
    
// }





// BUTTERFLY PATTERN
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1; j<=i;j++)
//         {
//             cout<<"*";
//         }
//         int space = 2*n - 2*i;
//         for(int i=1; i<=space; i++)
//         {
//             cout<<" ";
//         }
//         for(int j=1; j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//      for(int i=n;i>=1;i--)
//     {
//         for(int j=1; j<=i;j++)
//         {
//             cout<<"*";
//         }
//         int space = 2*n - 2*i;
//         for(int i=1; i<=space; i++)
//         {
//             cout<<" ";
//         }
//         for(int j=1; j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


//INVERTED TRIANGLE
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
    
//     for(int i=1;i<=n;i++)
//     {
//         int col=n-i+1;
//         for(int j=1; j<=col;j++)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }




//0101 pattern
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
    
//     for(int i=1;i<=n;i++)
//     {
//         ;
//         for(int j=1; j<=i;j++)
//         {
//             if((i+j)%2 == 0)
//             {
//                 cout<<"1";
//             }
//             else
//             {
//                 cout<<"0";
//             }
//         }
//         cout<<endl;
//     }
// }





//RHOMBUS PATTERN
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin >> n;
// for(int i=1;i<=n;i ++){
// for(int j=1;j<=n-i;j ++){
// cout <<" ";
// }
// for(int j=1;j< n;j ++){
// cout <<"*";
// }
// cout<<endl;
// }

// }





// PALINDROME PATTERN
#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
for(int i=1;i<=n;i++)
{
    int j;
    for(j=1;j<=n-i;j++)
    {
        cout<<" ";
    }
    int k=i;
    for(;j<=n;j++)
    {
        cout<<k--<<" ";
    }
    k=2;
    for(;j<=n+i-1;j++);
    cout<<k++<<" "<<endl;
}

cout<<endl;
}

