#include<bits/stdc++.h>
using namespace std;

class Solution{	
	public:		
		void reverseString(vector<char>& s){
			stack<char> reverse;

            for(char c : s){
                reverse.push(c);
            }

            for(int i=0; i<s.size(); i++){
                s[i] = reverse.top();
                reverse.pop();
            }

            return;
		}
};

int main() {
    vector<char> str = {'h', 'e', 'l', 'l', 'o'};
    Solution sol;
    sol.reverseString(str);

    for (char c : str) {
        cout << c;
    }
    return 0;
}