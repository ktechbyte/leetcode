class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        vector<long long> dp(n + 1, 0);
        dp[1] = 1; //On day 1, exactly one person knows the secret
        long long share = 0, MOD = 1e9 + 7; // share = current number of people sharing the secret
        for (int t = 2; t <= n; t++) {
            if (t - delay > 0)
                share = (share + dp[t - delay] + MOD) % MOD; //add dp[t−delay] to share because those people now begin sharing
            if (t - forget > 0)
                share = (share - dp[t - forget] + MOD) % MOD; //subtract dp[t−forget] from share because those people forget and stop sharing
            dp[t] = share; //all current sharers spread the secret to that many new people on day t
        }
        long long know = 0;
        for (int i = n - forget + 1; i <= n; i++)
            know = (know + dp[i]) % MOD; //sum up all people who still know the secret. These are people who learned the secret in the last forget−1 days before day n.
        return (int)know;
    }
};