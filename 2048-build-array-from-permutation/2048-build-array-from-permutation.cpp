class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> copy = nums;
        for(int i = 0; i<nums.size(); i++){
            nums[i] = copy[copy[i]];
        }
        return nums;
    }
};