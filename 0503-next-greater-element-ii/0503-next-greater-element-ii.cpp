class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        vector<int> ans(n, -1);
        
        for(int i = 2*n-1; i>=0; i--){
            int curr = nums[i%n];

            while(!st.empty() && st.top()<=curr) st.pop();
            if(i<n && !st.empty()) ans[i] = st.top();

            st.push(curr);
        }

        return ans;
    }
};