#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void pattern10(int n){
            for(int i=1; i<2*n; i++){
                if(i<=n){
                    for(int j=1; j<=i; j++){
                        cout<<"*";
                    }
                    cout<<endl;
                }else{
                    for(int j=i-n; j<n; j++){
                        cout<<"*";
                    }
                    cout<<endl;
                }
            }
        }
};

int main(){
    int N=5;
    Solution sol;
    sol.pattern10(N);
    return 0;
}