#include<bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int sum(vector<int>& nums, int left) {
        if (left >= nums.size()) {
            return 0;
        }

        return nums[left] + sum(nums, left + 1);
    }

    int arraySum(vector<int>& nums) { return sum(nums, 0); }
};

int main(){
    vector<int> arr = {2,3,4};
    Solution sol;
    cout<<"Result: "<<sol.arraySum(arr)<<endl;;
    return 0;
}