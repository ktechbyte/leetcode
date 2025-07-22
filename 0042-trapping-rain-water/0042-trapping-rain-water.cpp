class Solution {
public:
    int trap(vector<int>& height) {
        /*Brute force approach*/
        // int n = height.size();
        // if (n == 0) return 0;

        // vector<int> maxLeft(n), maxRight(n);
        // maxLeft[0] = height[0];
        // maxRight[n - 1] = height[n - 1];

        // for (int i = 1; i < n; i++)
        //     maxLeft[i] = max(maxLeft[i - 1], height[i]);

        // for (int i = n - 2; i >= 0; i--)
        //     maxRight[i] = max(maxRight[i + 1], height[i]);

        // int sum = 0;
        // for (int i = 0; i < n; i++)
        //     sum += min(maxLeft[i], maxRight[i]) - height[i];

        // return sum;

        /* Optimization using decreasing monotonic stack*/
        int n = height.size();
        int sum = 0;
        stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && height[i] > height[st.top()]) {
                int bottom = st.top();
                st.pop();

                if (st.empty()) break;

                int left = st.top();
                int width = i - left - 1;
                int boundedHeight = min(height[i], height[left]) - height[bottom];
                sum += width * boundedHeight;
            }
            st.push(i);
        }

        return sum;
    }
};
