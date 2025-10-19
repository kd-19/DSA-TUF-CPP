#include<bits/stdc++.h>
using namespace std;

bool arraySortedOrNot(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i-1] > arr[i]){
            return false;
        }
    }

    return true;
}

int main(){
    int arr[] = {1,2,3,8,6,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<arraySortedOrNot(arr, size); 
    return 0;
}