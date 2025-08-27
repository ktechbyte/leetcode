// class Solution {
// public:
//     int change(int amount, vector<int>& coins) {
//         int n = coins.size();
//         vector<vector<long long>> dp(n+1, vector<long long>(amount+1, 0));
//         for(int i = 0; i<n+1; i++){
//             dp[i][0] = 1;
//         }

//         for(int i = 1; i<n+1; i++){
//             for(int j = 1; j < amount+1; j++){
//                 if(coins[i-1] <= j)
//                     dp[i][j] = dp[i][j-coins[i-1]] + dp[i-1][j];
//                 else
//                     dp[i][j] = dp[i-1][j];
//             }
//         }
//         return static_cast<int>(dp[n][amount]);
//     }
// };

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> dp(amount + 1, 0);
        dp[0] = 1;

        for (int coin : coins) {
            for (int j = coin; j <= amount; j++) {
                long long ways = (long long)dp[j] + dp[j - coin];
                dp[j] = (int)ways;
            }
        }

        return dp[amount];
    }
};

