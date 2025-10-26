#include<bits/stdc++.h>
using namespace std;

class Solution {
   public:
    long long int factorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }

        return n * factorial(n - 1);
    }
};

int main(){
    int n;
    cout<<"Enter an number:"<<endl;
    cin>>n;
    Solution sol;
    cout<<"Result: "<<sol.factorial(n)<<endl;;
    return 0;
}