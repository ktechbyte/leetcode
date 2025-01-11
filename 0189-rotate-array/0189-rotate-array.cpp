class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // outplace solution
        vector<int> nums2 = nums;
        for(int i = 0; i<nums.size();i++){
            nums[((i+k)%nums.size())] = nums2[i];
        }
    }
};