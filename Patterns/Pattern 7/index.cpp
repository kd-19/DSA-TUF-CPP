#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        void pattern7(int n){
            for(int i=1; i<=n; i++){
                for(int j=1; j<=n-i; j++){
                    cout<<" ";
                }
                for(int j=1; j<= 2*i-1; j++){
                    cout<<"*";
                }
                cout<<endl;
            }
        };
};

int main(){
    int N=5;
    Solution sol;
    sol.pattern7(N);
    return 0;
}