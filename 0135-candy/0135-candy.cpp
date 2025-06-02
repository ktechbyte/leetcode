class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        if(n == 0) return 0;

        vector<int> ans(n, 1);

        for(int i = 1; i < n; i++) { // left to right
            if(ratings[i] > ratings[i-1]) ans[i] = ans[i-1] + 1;
        }

        for(int i = n - 2; i >= 0; i--) { // right to left
            if(ratings[i] > ratings[i+1]) ans[i] = max(ans[i], ans[i+1] + 1);
        }

        return accumulate(ans.begin(), ans.end(), 0);
    }
};