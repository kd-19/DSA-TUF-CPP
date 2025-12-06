#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
        bool checkSorted(vector<int>& nums, int left, int right){
            if(right >= nums.size()){
                return true;
            }

            if(nums[left] > nums[right]){
                return false;
            }

            return checkSorted(nums, left+1, right+1);
        }	
	public:
		bool isSorted(vector<int>& nums){
			if(nums.size() <= 1){
                return true;
            }

            return checkSorted(nums, 0, 1);
		}
};

int main(){
    vector<int> arr1 = {2,3,5,4};
    vector<int> arr2 = {2,3,4,5};
    Solution sol;
    cout<<boolalpha;
    cout<<"Result1: "<<sol.isSorted(arr1)<<endl;
    cout<<"Result2: "<<sol.isSorted(arr2)<<endl;
    return 0;
}