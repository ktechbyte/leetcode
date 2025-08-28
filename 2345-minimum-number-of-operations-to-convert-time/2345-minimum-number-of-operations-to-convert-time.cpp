class Solution {
public:
    int convertTime(string current, string correct) {
        current.replace(2, 1, "");
        correct.replace(2, 1, "");

        int curr = stoi(current);
        int corr = stoi(correct);

        int hourDiff = corr / 100 - curr / 100 - 1;
        int minDiff = corr % 100 + (60 - curr % 100);

        if (minDiff >= 60) {
            hourDiff++;
            minDiff = minDiff - 60;
        }

        int amount = hourDiff * 60 + minDiff;

        vector<int> mins = {1, 5, 15, 60};
        vector<vector<int>> dp(5, vector<int>(amount + 1, INT_MAX - 1));
        for (int i = 1; i < 5; i++) {
            dp[i][0] = 0;
        }

        for (int i = 1; i < 5; i++) {
            for (int j = 1; j < amount + 1; j++) {
                if (mins[i - 1] <= j)
                    dp[i][j] = min(dp[i][j - mins[i - 1]] + 1, dp[i - 1][j]);
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        return dp[4][amount];
    }
};