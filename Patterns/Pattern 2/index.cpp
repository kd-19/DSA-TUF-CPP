#include<bits/stdc++.h>
using namespace std;

class Soltuion
{
public:
    void pattern2(int n) {
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};

int main(){
    int N=5;
    Soltuion sol;
    sol.pattern2(N);
    return 0;
}


