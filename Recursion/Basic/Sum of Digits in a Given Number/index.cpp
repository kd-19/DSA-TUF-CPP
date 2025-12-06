#include<bits/stdc++.h>
using namespace std;

class Solution{
private:
    int sum(int num){
        if(num == 0){
            return 0;
        }

        return sum(num/10) + (num%10);

    }
public:
	int addDigits(int num){
		if(num < 10){
            return num;
        }

        int sumOfDigits = sum(num);
        return addDigits(sumOfDigits);
	}
};

int main(){
    int n;
    cout<<"Enter an number:"<<endl;
    cin>>n;
    Solution sol;
    cout<<"Result: "<<sol.addDigits(n)<<endl;;
    return 0;
}