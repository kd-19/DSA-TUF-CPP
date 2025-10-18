#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int N){
    if(N == 0){
        return true;
    };

    int ref = N;
    int rev = 0;
    while(ref > 0){
        int lastDigit = ref%10;
        rev = rev*10 + lastDigit;
        ref = ref/10;
    }

    return rev == N;
}

int main(){
    int n = 22722;
    cout<<isPalindrome(n);
    return 0;
}