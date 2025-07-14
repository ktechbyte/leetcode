class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        /* O(n^2) brute force approach*/
        // vector<int> ans(nums1.size(), -1);
        // for(int i = 0; i<nums1.size(); i++){
        //     int k = nums1[i];
        //     int x = 0;
        //     while(k!=nums2[x]) x++;
        //     for(int j = x+1; j<nums2.size(); j++){
        //         if(nums2[j]>nums2[x]){
        //             ans[i] = nums2[j];
        //             break;
        //         }
        //     }
        // }
        // return ans;

        /*Stack Optimization Approach*/
        stack<int> st;
        unordered_map<int, int> ump;
        vector<int> ans;
        for(int element : nums2){
            while(!st.empty() && element > st.top()){
                ump[st.top()] = element;
                st.pop();
            }
            st.push(element);
        }
        for(int n : nums1){
            if(ump.find(n) != ump.end()){
                ans.push_back(ump[n]);
            }
            else ans.push_back(-1);
        }
        return ans;
    }
};