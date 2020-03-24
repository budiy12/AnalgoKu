#include <iostream>
using namespace std;

void merge(int arr[], int p, int q, int r) 
{ 
    int i, j, k; 
    int n1 = q - p + 1; 
    int n2 =  r - q; 
    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        L[i] = arr[p + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[q + 1+ j]; 
  
    i = 0; 
    j = 0; 
    k = p; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 

void mergeSort(int arr[], int p, int r) 
{ 
    if (p < r) 
    { 
        int q = p+(r-p)/2; 
        mergeSort(arr, p, q); 
        mergeSort(arr, q+1, r); 
        merge(arr, p, q, r); 
    } 
}

int main()
{
    int arr[] = {20, 63, 3, 36, 61, 52, 42, 69, 18, 6, 82, 34, 62, 27, 67, 65, 33, 79, 88, 23}; 
    int p = 0, r = sizeof(arr)/sizeof(arr[0]);

    cout<<"\nBefore: \n";
    for (int i = 0; i<r; i++){
        cout<<arr[i]<<" ";
    }
    
    mergeSort(arr,p,r-1);
    
    cout<<"\nAfter: \n";
    for (int i = 0; i<r; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
