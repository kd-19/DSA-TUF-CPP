#include<bits/stdc++.h>
using namespace std;

class Soltuion
{
public:
    void pattern4(int n) {
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout<<i;
            }
            cout<<endl;
        }
    }
};

int main(){
    int N=5;
    Soltuion sol;
    sol.pattern4(N);
    return 0;
}


