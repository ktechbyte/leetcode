class Solution {
public:
    int MAH(vector<int> arr) {
        int n = arr.size();
        stack<int> st1, st2;
        vector<int> right(n), left(n);
        int ans = 0;

        // NSER - right
        for(int i = n - 1; i >= 0; i--) {
            while(!st1.empty() && arr[st1.top()] >= arr[i])
                st1.pop();
            right[i] = st1.empty() ? n : st1.top();
            st1.push(i);
        }

        // NSEL - left
        for(int i = 0; i < n; i++) {
            while(!st2.empty() && arr[st2.top()] >= arr[i])
                st2.pop();
            left[i] = st2.empty() ? -1 : st2.top();
            st2.push(i);
        }

        for(int i = 0; i < n; i++) {
            ans = max(ans, (right[i] - left[i] - 1) * arr[i]);
        }

        return ans;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty() || matrix[0].empty())
            return 0;

        int maxRect = 0;
        int m = matrix.size(), n = matrix[0].size();
        vector<int> ds(n, 0);

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == '0')
                    ds[j] = 0;
                else
                    ds[j] += 1;
            }
            maxRect = max(maxRect, MAH(ds));
        }

        return maxRect;
    }
};
