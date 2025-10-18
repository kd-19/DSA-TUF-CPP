#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int N){
    if(N == 0){
        return 0;
    };

    int rev = 0;
    while(N > 0){
        int lastDigit = N%10;
        rev = rev*10 + lastDigit;
        N = N/10;
    }

    return rev;
}

int main(){
    int n = 276;
    cout<<reverseNumber(n);
    return 0;
}