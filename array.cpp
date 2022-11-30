// #include <stdio.h>
// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// //printing 1D array

// /*int main()
// {
//     int arr[100], i, n;
//     //taking input of no. of elements
//     cin>>n;
//     //taking input of elements
//     for(i=0; i<n; i++){
    
//             cout<<"enter element ["<<i<<"]";
//             cin>>arr[i];
    
//     }
//     cout<<"array is"<<"\t";
// //displaying the array
//     for(i=0; i<n; i++)
//     {
//         cout<<arr[i]<<"\t";
//     }
//     return 0;
// }
// */

// /*
// //2D array
// int main() {
//   int arr[100][100],r,c, i,j;
//   //taking row and column as input
//     cin>>r>>c;
// //first for loop for row
//     for ( i = 0; i < r; i++)
//     {
//         //second for loop for column
//         for ( j = 0; j < c; j++)
//         {
//             cout<<"enter the elements ["<<i<<"] ["<<j<<"]";
//             cin>>arr[i][j];

//         }
//     }
    
//         cout<<"matrix is"<<endl;
//         for(i=0; i<r;i++)
//         {
//             for ( j = 0; j < c; j++)
//             {
//                 cout<<arr[i][j];
//             }
//             //adding endl to print second row in the next line
//             cout<<endl;
//         }
//     return 0;
// }
// */


// //3D array
// int main(){
//     int arr[3][2][2], i, j , k;
//     //3= type of array, 2=row, 2=column
//     //first for loop for type of array
//     for ( i = 0; i < 3; i++)
//     {
//         //seconf for loop for rows
//         for ( j = 0; j < 2; j++)
//         {
//             //third for loop for columns
//             for ( k = 0; k < 2; k++)
//             {
//                 //taking input
//                 cout<<"enter elements ["<<i<<"] ["<<j<<"] ["<<k<<"]";
//                 cin>>arr[i][j][k];
//             }
            
//         }
//     }
//       cout<<"elements are"<<endl;
//     for ( i = 0; i < 3; i++)
//     {
//         //seconf for loop for rows
//         for ( j = 0; j < 2; j++)
//         {
//             //third for loop for columns
//             for ( k = 0; k < 2; k++)
//             {
//                 //displaying output
//                cout<<arr[i][j][k]<<"\t";
//             }
            
//         }
//     }
// }

// //SPIRAL PATTERN MATRIX
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[100][100],r,c, i,j;
//   //taking row and column as input
//     cin>>r>>c;
// //first for loop for row
//     for ( i = 0; i < r; i++)
//     {
//         //second for loop for column
//         for ( j = 0; j < c; j++)
//         {
//             cin>>a[i][j];

//         }
//     }
//     for ( i = 0; i < r; i++)
//     {
//         //second for loop for column
//         for ( j = 0; j < c; j++)
//         {
//             cout<<a[i][j]<<" ";

//         }
//         cout<<endl;
//     }
//     int row_s =0, row_e=r-1, col_s=0,col_e=c-1;
//     while(row_s<=row_e && col_s<=col_e)
//     {
//         //for row start
//         for(int col=col_s;col<col_e;col++)
//         {
//             cout<<a[row_s][col]<<" ";
//         }
//         row_s++;
//         //for column end
//         for(int row=row_s;row<row_e;row++)
//         {
//             cout<<a[row][col_e];
//         }
//         col_e--;
//         //for row end
//         for(int col=col_e;col>=col_s;col++)
//         {
//             cout<<a[row_e][col];
//         }
//         row_e--;
//         //for col start
//         for(int row=row_e;row>=row_s;row++)
//         {
//             cout<<a[row][col_s];
//         }
//         col_s++;
//     }

// }


#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();
    int i=0;
    int currlen=0;
    int maxlen=0;
    while (1)
    {
        if(a[i] ==' ' || a[i]=='\0')
        {
            if(currlen>maxlen)
            {
                maxlen=currlen;
            }
            currlen=0;
        }
        else
        currlen++;
        if(a[i] == '\0')
        {
            break;
        }
        i++;

    }
    cout<<maxlen;
    return 0;
}