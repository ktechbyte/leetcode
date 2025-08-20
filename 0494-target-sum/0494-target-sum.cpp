class Solution {
public:
    int countSubsetSum(vector<int>& nums, int sum) {
        int n = nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));

        for (int i = 0; i <= n; i++)
            dp[i][0] = 1; // empty set

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= sum; j++) {
                if (nums[i - 1] <= j)
                    dp[i][j] = dp[i - 1][j - nums[i - 1]] + dp[i - 1][j];
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        return dp[n][sum];
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        long long sum = 0;
        int zeroCount = 0;
        vector<int> filtered;

        for (int x : nums) {
            sum += x;
            if (x == 0)
                zeroCount++;
            else
                filtered.push_back(x);
        }

        if ((target + sum) % 2 != 0 || abs(target) > sum)
            return 0;

        long long findSum = (target + sum) / 2;

        int ways = countSubsetSum(filtered, (int)findSum);

        return ways * (1 << zeroCount);
    }
};