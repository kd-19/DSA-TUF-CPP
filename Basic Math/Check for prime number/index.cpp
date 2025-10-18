#include<bits/stdc++.h>
using namespace std;

bool isPrime(int N){

    for(int i=2; i<N; i++){
        if(N%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n = 7;
    cout<<isPrime(n);
    return 0;
}