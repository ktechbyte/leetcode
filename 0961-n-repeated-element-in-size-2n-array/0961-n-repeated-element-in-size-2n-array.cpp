class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size()/2;
        map<int, int> mp;
        int ans = 0;
        for(int x : nums){
            mp[x]++;
            if(mp[x] == n){
                ans = x;
                break;
            }
        }
        return ans;
    }
};