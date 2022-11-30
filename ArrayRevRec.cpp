#include <iostream>
#include <algorithm>

using namespace std;

int ArrayReversal(int arr[], int size, int count){
    if (count == size/2)
    {
        return 0;
    }

    swap(arr[count], arr[size - count - 1]);

    return ArrayReversal(arr, size, count + 1);
    
}


int main()
{
    int arr[] = {5,4,3,2,1,0};
    int size = sizeof(arr)/sizeof(arr[0]);

    ArrayReversal(arr, size, 0);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
     
    return 0;
}