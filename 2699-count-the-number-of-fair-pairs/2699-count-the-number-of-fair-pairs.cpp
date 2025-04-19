class Solution {
public:
    long long slidingWindow(vector<int>& nums, int limit) {
        long long pairs = 0;
        int n = nums.size();
        for (int l = 0, r = n - 1; l < n; l++) {
            while (r > l && nums[l] + nums[r] > limit) {
                r--;
            }
            if (r > l) {
                pairs += (r - l);
            }
        }
        return pairs;
    }

    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        // iterative method: TLE error (O(n^2))
        // sort(nums.begin(), nums.end());
        // long long numOfPairs = 0;
        // for(int i = 0; i<nums.size(); i++){
        //     for(int j = i+1; j<nums.size(); j++){
        //         int sum = nums[i] + nums[j];
        //         if(sum >= lower && sum <= upper) numOfPairs++;
        //     }
        // }
        // return numOfPairs;

        // method 2: sliding window
        // count pairs with sum less than lower & greater than upper, subtract
        // those pairs to get fair pairs
        sort(nums.begin(), nums.end());
        long upperSumOfPairs = slidingWindow(nums, upper);
        long lowerSumOfPairs = slidingWindow(nums, lower - 1);
        return upperSumOfPairs - lowerSumOfPairs;
    }
};