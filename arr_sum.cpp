// #include <stdio.h>
// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// //sum of 2 matrices
// int main()
// {
//   int a[100][100],b[100][100],r,c, i,j, sum[100][100];
//   //taking row and column as input
//     cin>>r>>c;
//     //input of first matrix
// //first for loop for row
//     for ( i = 0; i < r; i++)
//     {
//         //second for loop for column
//         for ( j = 0; j < c; j++)
//         {
//             cout<<"enter the elements ["<<i<<"] ["<<j<<"]";
//             cin>>a[i][j];

//         }
//     }
    
//     //input of second matrix
//     for ( i = 0; i < r; i++)
//     {

//         for ( j = 0; j < c; j++)
//         {
//             cout<<"enter the elements ["<<i<<"] ["<<j<<"]";
//             cin>>b[i][j];

//         }
//     }
//     //sum of matrix
//         cout<<"sum of matrix is"<<endl;
//         for(i=0; i<r;i++)
//         {
//             for ( j = 0; j < c; j++)
//             {
//                 sum[i][j]=a[i][j] + b[i][j];
//                 cout<<sum[i][j];
//             }
//             //adding endl to print second row in the next line
//             cout<<endl;
//         }
//     return 0;
// }


#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

//multiplication of 2 matrices
int main()
{
  int a[100][100],b[100][100],r,c, i,j, mul[100][100];
  //taking row and column as input
    cin>>r>>c;
    //input of first matrix
//first for loop for row

    for ( i = 0; i < r; i++)
    {
        //second for loop for column
        for ( j = 0; j < c; j++)
        {
            cout<<"enter the elements ["<<i<<"] ["<<j<<"]";
            cin>>a[i][j];

        }
    }
    
    //input of second matrix
;
    for ( i = 0; i < r; i++)
    {

        for ( j = 0; j < c; j++)
        {
            cout<<"enter the elements ["<<i<<"] ["<<j<<"]";
            cin>>b[i][j];

        }
    }
    //mul of matrix
        cout<<"multiplication of matrix is"<<endl;

        for(i=0; i<r;i++)
        {
            for ( j = 0; j < c; j++)
            {
                for(int k=0;k<c;k++)
                {
               mul[i][j]+=a[i][k]*b[k][j];  
            }
        }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<mul[i][j]<<" ";
            }
            cout<<endl;
        }
    return 0;
}
