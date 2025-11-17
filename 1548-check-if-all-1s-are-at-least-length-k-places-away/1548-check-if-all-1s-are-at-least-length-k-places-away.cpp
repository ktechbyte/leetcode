class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int track = -1;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 1){
                if(track != -1){
                    if(i - track <= k)
                        return false;
                }
                track = i;
            }
        }
        return true;
    }
};