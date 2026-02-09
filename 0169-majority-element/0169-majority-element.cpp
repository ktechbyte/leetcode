class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // return nums[nums.size()/2];

        // moore's algo
        int cnt = 0, el;
        for(int i = 0; i<nums.size(); i++){
            if(cnt==0){
                cnt = 1;
                el = nums[i];
            } else if(nums[i] == el){
                cnt++;
            } else{
                cnt--;
            }
        }

        // validation
        cnt = 0;
        for(int x : nums){
            if(x==el) cnt++;
        }
        return cnt>nums.size()/2 ? el : -1;
    }
};