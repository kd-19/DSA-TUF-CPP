#include<bits/stdc++.h>
using namespace std;

class Solution{	
	public:		
		bool palindromeCheck(string& s){
            int left = 0;
            int right = s.length() - 1;

            while(left < right){
                if(s[left] != s[right]){
                    return false;
                }
                left++;
                right--;
            }

            return true;
		}
};

int main() {
    string str1 = "ollello";
    string str2 = "hello";
    Solution sol;
    
    cout<<boolalpha;
    cout<<"Result 1:"<<sol.palindromeCheck(str1)<<endl;
    cout<<"Result 2:"<<sol.palindromeCheck(str2)<<endl;
    return 0;
}