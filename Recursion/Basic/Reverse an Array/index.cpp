#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
        void reverse(vector<int>& nums, int left, int right){
            if(left >= right){
                return;
            }

            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            reverse(nums, left+1, right-1);
        }	
	public:
		vector<int> reverseArray(vector<int>& nums){			
			reverse(nums, 0, nums.size()-1);
            return nums; 
		}
};

int main(){
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5}; 
    vector<int> result = sol.reverseArray(nums); 
    for (int num : result) {
        cout << num << " "; 
    }
    return 0;
}