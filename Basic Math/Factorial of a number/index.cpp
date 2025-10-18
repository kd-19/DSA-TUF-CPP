#include<bits/stdc++.h>
using namespace std;

int factorial(int N){
    if(N == 0 || N == 1){
        return 1;
    };

    int fact = 1;
    while(N > 1){
        fact = fact * N;
        N -= 1;
    }

    return fact;
}

int main(){
    int n = 4;
    cout<<factorial(n);
    return 0;
}