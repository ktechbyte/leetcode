class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int p = 0, n = 1;
        int s = nums.size();
        vector<int> ans(s, 0);
        for(int i = 0; i<s; i++){
            if(nums[i] < 0){
                ans[n] = nums[i];
                n+=2;
            } else{
                ans[p] = nums[i];
                p+=2;
            }
        }
        return ans;
    }
};