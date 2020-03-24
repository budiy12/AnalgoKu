#include <iostream>
using namespace std;

int main()
{
    int i, idx, arr[] = { 10, 20, 80, 30, 60, 50, 110, 100, 130, 170 };
    bool found;
    int n = sizeof(arr)/sizeof(arr[0]);
    int y = 110;

    // Start Algorithm
    i = 1;
    found = false;
    while (i<=n && !found) {
        if (arr[i] == y) found = true;
        else i++;
    }
    if (found) idx = i;
    else idx = 0;
    // End Algorithm

    cout<<"Array: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nElemen "<<y<<" Berada pada index ke-"<<idx;
    return 0;
}
