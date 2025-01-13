class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int large = 0;
        int track = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 1){
                track++;
            }
            else if(nums[i] == 0){
                if(track>large) large = track;
                track = 0;
            }
        }
        if(track>large) large = track;
        return large;
    }
};