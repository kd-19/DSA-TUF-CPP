#include<bits/stdc++.h>
using namespace std;

class Soltuion
{
public:
    void pattern5(int n) {
        for(int i=1; i<=n; i++){
            for(int j=n; j>=i; j--){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};

int main(){
    int N=5;
    Soltuion sol;
    sol.pattern5(N);
    return 0;
}


