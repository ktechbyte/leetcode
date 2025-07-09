class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        int n = startTime.size();
        int ans = 0, right = 0, left = 0;
        vector<int> sum(n+1);

        for(int i = 0; i<n; i++){
            sum[i+1] = sum[i] + endTime[i] - startTime[i];
        }

        for(int i = k-1; i<n; i++){
            if(i == k-1) left = 0;
            else left = endTime[i-k];

            if(i==n-1) right = eventTime;
            else right = startTime[i+1];

            ans = max(ans, right - left - (sum[i+1] - sum[i-k+1]));
        }
        return ans;
    }
};