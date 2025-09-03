class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // outplace solution
        vector<int> nums2 = nums;
        int n = nums.size();
        for(int i = 0; i<n;i++){
            nums[(i+k) % n] = nums2[i];
        }
    }
};