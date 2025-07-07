class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int count = 0, count_max = 0;
        for(int i = 0; i<nums.length; i++){
            if(nums[i] == 1) count++;
            else{
                count_max = count_max > count ? count_max : count;
                count = 0;
            }
        }
        return count_max > count ? count_max : count;
    }
}