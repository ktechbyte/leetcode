class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int ans = 0;
        for(int x : nums){
            ans = ans ^ x;
        }
        return ans;
        // int n = nums.size();
        // int val = 0, ans = 0;
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < n; j++) {
        //         for (int k = 0; k < n && k != j; k++) {
        //             val = ((nums[i] | nums[j]) & nums[k]);
        //             ans = ans ^ val;
        //         }
        //     }
        // }
        // return ans;
    }
};