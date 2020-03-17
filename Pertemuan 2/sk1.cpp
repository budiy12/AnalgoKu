#include <iostream>
using namespace std;

int main()
{
    int max, i, arr[] = { 1, 45, 54, 71, 66, 12 };
    int n = sizeof(arr)/sizeof(arr[0]);

    //Start Algorithm 
    max = arr[0];
    i = 2;
    while (i<=n) {
        if (arr[i]>max) {
            max = arr[i];
        }
        i++;
    }
    // End Algorithm

    cout<<"Array: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<"\nMax = "<<max;
    return 0;
}
