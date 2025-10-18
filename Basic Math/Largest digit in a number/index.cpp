#include<bits/stdc++.h>
using namespace std;

int largestDigit(int N){
    if(N == 0){
        return 0;
    };

    int largest = 0;
    while(N > 0){
        int lastDigit = N%10;
        if(lastDigit > largest){
            largest = lastDigit;
        }
        N = N/10;

    }

    return largest;
}

int main(){
    int n = 276;
    cout<<largestDigit(n);
    return 0;
}