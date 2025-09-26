class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return 0;
        sort(nums.begin(), nums.end());
        int count = 0;
        for(int i = n-1; i>1; i--){
            int left = 0;
            int right = i-1;
            while(left<right){
                int twoSides = nums[left] + nums[right];
                if(twoSides > nums[i]){
                    count += right - left;
                    right--;
                }
                else left++;
            }
        }
        return count;
    }
};