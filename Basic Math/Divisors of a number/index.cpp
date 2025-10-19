#include<bits/stdc++.h>
using namespace std;

vector<int> divisors(int N){
    vector<int> divisors;

    for(int i=1; i<=N; i++){
        if(N%i == 0){
            divisors.push_back(i);
        }
    }

    return divisors;
}

int main(){
    int n = 8;
    vector<int> result = divisors(n);
    
    cout << "The divisors of " << n << " are: ";
    for(int i=0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}