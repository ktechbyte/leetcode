class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> freq;
        freq[0] = 1;
        int sum = 0;
        int count = 0;

        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
            int rem = sum - k;
            if(freq.find(rem) != freq.end())
                count += freq[rem];

            freq[sum]++;
        }
        return count;
    }
};