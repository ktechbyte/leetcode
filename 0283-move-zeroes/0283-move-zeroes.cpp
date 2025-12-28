class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // if(nums.size() <= 1) return;
        // int count = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] != 0) {
        //         nums[count++] = nums[i];
        //     }
        // }
        // while (count < nums.size()) {
        //     nums[count++] = 0;
        // }

        // optimal approach
        int j = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};