#include <iostream>
using namespace std;

int main()
{
    int i, j, mid, idx, arr[] = { 10, 20, 80, 30, 60, 50, 110, 100, 130, 170 };
    bool found;
    int n = sizeof(arr)/sizeof(arr[0]);
    int y = 130;

    // Start Algorithm
    i = 1;
    j = n;
    found = false;
    while (!found && i<=j) {
        mid = (i + j) / 2;
        if (arr[mid] == y) found = true;
        else {
            if (arr[mid] < y) i = mid + 1;
            else j = mid - 1;
        }
    }
    if (found) idx = mid;
    else idx = 0;
    // End Algorithm

    cout<<"Array: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nElemen "<<y<<" Berada pada index ke-"<<idx;
    return 0;
}
