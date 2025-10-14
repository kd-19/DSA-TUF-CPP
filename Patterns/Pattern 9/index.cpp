#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
        void upPattern(int n){
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
        void downPattern(int n){
            for(int i=n; i>=1; i--){

                for(int j=0; j<n-i; j++){
                    cout<<" ";
                }
                for(int j=1; j<= 2*i - 1; j++){
                    cout<<"*";
                }

                cout<<endl;
            }
        }

    public:    
        void pattern9(int n){
            this->upPattern(n);
            this->downPattern(n);
        }
};

int main(){
    int N=5;
    Solution sol;
    sol.pattern9(N);
    return 0;
}