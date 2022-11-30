#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
int main() {
    int arr[] = {5,32,53,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr + n);
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr, arr + n);

    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<*min_element(arr, arr + n)<<endl;
    cout<<*max_element(arr, arr + n)<<endl;


    string str = "arjun";
    cout<<str<<endl;
    reverse(str.begin(), str.end());
    cout<<str<<endl;

    return 0;
}
