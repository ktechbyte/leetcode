class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, count_max = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 1) count++;
            else if(nums[i] == 0){
                count_max = max(count_max, count);
                count = 0;
            }
        }
        return max(count_max, count);
    }
};