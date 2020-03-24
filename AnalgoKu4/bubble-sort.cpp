#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int temp;
    if (n == 1)
        return;
    
    for (int i=0; i<n-1; i++) {
        if (arr[i] > arr[i+1]) {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    bubbleSort(arr,n-1);       
}

int main()
{
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Unsorted Array: ";   
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    bubbleSort(arr,n);

    cout<<"\nSorted Array: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
