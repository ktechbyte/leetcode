class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int track = 0;
        int maxLen = 0;

        for(int i = 0; i<nums.size(); i++){
            while(nums[i] - nums[track] > 1) track++;
            if(nums[i] - nums[track] == 1) maxLen = max(maxLen, i-track+1);
        }
        return maxLen;
    }
};