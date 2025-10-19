#include<bits/stdc++.h>
using namespace std;

int countOdd(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 1){
            count += 1;
        }
    }

    return count;
}

int main(){
    int arr[] = {3,6,7,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<countOdd(arr, size); 
    return 0;
}