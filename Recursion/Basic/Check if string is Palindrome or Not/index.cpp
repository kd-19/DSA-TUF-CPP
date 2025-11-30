#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:		
		bool palindromeCheck(string& s){
			return isPalindrome(s, 0, s.length() - 1);
		}
    private:
        bool isPalindrome(string& s, int left, int right){
            if(left >= right){
                return true;
            }

            if(s[left] != s[right]){
                return false;
            }

            return isPalindrome(s, left+1, right-1);
        }


};

int main(){
    Solution sol;
    string s1 = "HannaH";
    string s2 = "Hello"; 
    cout << boolalpha; 
    cout<<"Result1: "<<sol.palindromeCheck(s1)<<endl;
    cout<<"Result2: "<<sol.palindromeCheck(s2)<<endl;
    return 0;
}