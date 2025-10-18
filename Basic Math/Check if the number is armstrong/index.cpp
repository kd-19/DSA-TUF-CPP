#include<bits/stdc++.h>
using namespace std;

int countDigit(int n) {
        int count = log10(n) + 1;
        return count;
    }

bool isArmstrong(int N){
    if(N == 0){
        return true;
    };

    int count = countDigit(N);
    int ref = N;
    double sum = 0;
    while(ref > 0){
        int lastDigit = ref % 10;
        sum += pow(lastDigit, count);
        ref = ref/10;
    }

    return sum == N;
}

int main(){
    int n = 153;
    cout<<isArmstrong(n);
    return 0;
}