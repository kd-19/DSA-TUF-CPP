#include<bits/stdc++.h>
using namespace std;

int countOddDigit(int N){
    if(N == 0){
        return 0;
    };

    int count = 0;

    while(N > 0){
        int lastDigit = N%10;
        if(lastDigit % 2 == 1){
            count += 1;
        }
        N = N/10;
    }

    return count;
}

int main(){
    int n = 276350;
    cout<<countOddDigit(n);
    return 0;
}