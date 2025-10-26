#include<bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		int NnumbersSum(int N){
             if(N==0){
            return 0;
        }
			return NnumbersSum(N-1) + N;
		}
};

int main(){
    int n;
    cout<<"Enter an number:"<<endl;
    cin>>n;
    Solution sol;
    cout<<"Result: "<<sol.NnumbersSum(n)<<endl;;
    return 0;
}