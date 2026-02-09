class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int cnt = 0, longest = 0, lastSmall = INT_MIN;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] - 1 == lastSmall){
                cnt++;
                lastSmall = nums[i];
            } else if(nums[i] != lastSmall){
                cnt = 1;
                lastSmall = nums[i];
            }
            longest = max(longest, cnt);
        }
        return longest;
    }
};