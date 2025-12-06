#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
        bool isPrime(int num, int x){
            if(x > sqrt(num)){
                return true;
            }


            if(num % x == 0){
                return false;
            }

            return isPrime(num, x+1);
        }	
	public:
		bool checkPrime(int num){
			if(num <=1){
                return false;
            }

            return isPrime(num, 2);
		}
};

int main(){
    int n;
    cout<<"Enter an number:"<<endl;
    cin>>n;
    Solution sol;
    cout<<boolalpha;
    cout<<"Result: "<<sol.checkPrime(n)<<endl;
    return 0;
}