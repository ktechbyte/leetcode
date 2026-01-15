class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //bruteforce O(N^3)
        // int n = nums.size();
        // int maxSum = INT_MIN;

        // for (int startIndex = 0; startIndex < n; startIndex++) { 
        //     for (int endIndex = startIndex; endIndex < n; endIndex++) { 
        //         int currentSum = 0;
        //         for (int i = startIndex; i <= endIndex; i++) {
        //             currentSum += nums[i];
        //         }
        //         maxSum = max(maxSum, currentSum);
        //     }
        // }
        // return maxSum;

        // kadane's algo
        long long maxSum = LLONG_MIN, currSum = 0;
        for(int i = 0; i<nums.size(); i++){
            currSum += nums[i];
            maxSum = max(maxSum, currSum);
            if(currSum<0) currSum = 0;
        }
        return maxSum;
    }
};