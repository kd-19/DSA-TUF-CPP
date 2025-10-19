#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
    int* rev = new int[n];
    for (int i = 0; i < n; i++)
    {
        rev[i] = arr[n - i - 1];
    }

    // Copy the elements back to the original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = rev[i];
    }

    // Free the dynamically allocated memory
    delete[] rev;

    return;
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {3,6,7,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, size); 
    printArray(arr, size);
    return 0;
}