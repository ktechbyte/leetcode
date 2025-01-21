class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l = nums.size()-1;
        int count = 0;
        int i = 0;
        while(i<nums.size() && i<=l){
            if(nums[i] == val){
                swap(nums[i], nums[l]);
                count++;
                l--;
            }
            else{i++;}
        }
        return nums.size()-count;
    }
};