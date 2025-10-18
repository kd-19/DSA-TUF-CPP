#include<bits/stdc++.h>
using namespace std;

int isPerfect(int N){
    int sum = 0;

    for(int i=1; i<N; i++){
        if(N%i == 0){
            sum += i;
        }
    }
    return sum == N;
}

int main(){
    int n = 28;
    cout<<isPerfect(n);
    return 0;
}