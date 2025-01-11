class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        long reqSum = (len*(len+1))/2;
        long sum = 0;
        for(int i = 0; i<len; i++){
            sum += nums[i];
        }
        return reqSum-sum;
    }
};