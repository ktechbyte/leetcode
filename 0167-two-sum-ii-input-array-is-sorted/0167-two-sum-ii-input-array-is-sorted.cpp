class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1, sum = 0;
        vector<int> ans;
        while(left<right){
            sum = nums[left] + nums[right];
            if(sum == target){
                ans.push_back(left+1);
                ans.push_back(right+1);
                break;
            }
            else if(sum<target)
                left++;
            else
                right--;
        }
        return ans;
    }
};