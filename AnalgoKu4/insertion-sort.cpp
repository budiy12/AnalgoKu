#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, j, insert;
    for (i=1;i<n;i++) {
        insert = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > insert) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = insert;
    }
}

int main()
{
    int arr[] = { 1, 45, 54, 71, 66, 12 };
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Unsorted Array: ";   
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    insertionSort(arr,n);

    cout<<"\nSorted Array: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
