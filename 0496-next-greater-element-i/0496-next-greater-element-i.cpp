class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size(), -1);
        for(int i = 0; i<nums1.size(); i++){
            int k = nums1[i];
            int x = 0;
            while(k!=nums2[x]) x++;
            for(int j = x+1; j<nums2.size(); j++){
                if(nums2[j]>nums2[x]){
                    ans[i] = nums2[j];
                    break;
                }
            }
        }
        return ans;
    }
};