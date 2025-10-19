#include<bits/stdc++.h>
using namespace std;

int arraySum(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    return sum;
}

int main(){
    int arr[] = {3,6,7,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<arraySum(arr, size); 
    return 0;
}