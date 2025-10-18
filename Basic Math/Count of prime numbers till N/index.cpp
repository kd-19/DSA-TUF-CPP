#include<bits/stdc++.h>
using namespace std;

bool isPrime(int N){
    if(N == 1) return false;

    for(int i=2; i<N; i++){
        if(N%i == 0){
            return false;
        }
    }
    return true;
}

int primeUptoN(int N){
    int count = 0;
    for(int i=1; i<=N; i++){
        if(isPrime(i)){
            count += 1;
        }
    }
    return count;
}

int main(){
    int n = 7;
    cout<<primeUptoN(n);
    return 0;
}