#include<bits/stdc++.h>
using namespace std;

int countDigit(int N){
    if(N == 0){
        return 1;
    };

    int count = 0;

    while(N > 0){
        count += 1;
        N = N/10;
    }

    return count;
}

int main(){
    int n = 0053350;
    cout<<countDigit(n);
    return 0;
}