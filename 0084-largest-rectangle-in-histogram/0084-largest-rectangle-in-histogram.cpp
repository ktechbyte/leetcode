class Solution {
public:
    vector<int> NSEL(vector<int> arr) {
        stack<int> st;
        vector<int> ans;
        for(int i = 0; i<arr.size(); i++){
            while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
            if(st.empty()) ans.push_back(-1);
            else ans.push_back(st.top());
            st.push(i);
        }
        return ans;
    }

    vector<int> NSER(vector<int> arr) {
        stack<int> st;
        vector<int> ans;
        for(int i = arr.size()-1; i>=0; i--){
            while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
            if(st.empty()) ans.push_back(arr.size());
            else ans.push_back(st.top());
            st.push(i);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int> left = NSEL(heights);
        vector<int> right = NSER(heights);

        int ans = -1;

        for(int i = 0; i<heights.size(); i++){
            ans = max(ans, (right[i] - left[i] - 1)*heights[i]);
        }
        return ans;
    }
};