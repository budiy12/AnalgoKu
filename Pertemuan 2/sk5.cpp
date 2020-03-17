#include <iostream>
using namespace std;

int main()
{
    int i, j, imin, temp, arr[] = { 1, 45, 54, 71, 66, 12 };
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Unsorted Array: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    // Start Algorithm
    for (i=0;i<n-1;i++) {
        imin = i;
        for (j=i+1;j<n;j++) {
            if (arr[j] < arr[imin]) imin = j;
        }
        temp = arr[i];
        arr[i] = arr[imin];
        arr[imin] = temp;
    }
    // End Algorithm

    cout<<"\nSorted Array: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
