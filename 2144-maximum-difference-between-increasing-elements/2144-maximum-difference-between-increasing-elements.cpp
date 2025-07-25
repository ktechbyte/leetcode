class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int max = -1;
        for(int i = 0; i<nums.size()-1;i++){
            for(int j = i+1; j<nums.size();j++){
                if(nums[i]>=nums[j]) continue;
                if(nums[j] - nums[i]>max) max = nums[j] - nums[i];
            }
        }
        return max;
    }
};