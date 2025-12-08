#include<bits/stdc++.h>
using namespace std;

class Solution{	
public:		
    string largeOddNum(string& s){
        int n=-1;

        for(int i = s.length()-1; i>=0; i--){
            if((s[i]-'0') % 2 != 0){
                n = i;
                break;
            }
        } 

        int i = 0;
        while(i < n && s[i] == '0') i++;

        return s.substr(i, n - i + 1);
    }
};

int main() {
    string str1 = "00504";
    string str2 = "270320572";
    Solution sol;
    
    cout<<boolalpha;
    cout<<"Result 1:"<<sol.largeOddNum(str1)<<endl;
    cout<<"Result 2:"<<sol.largeOddNum(str2)<<endl;
    return 0;
}