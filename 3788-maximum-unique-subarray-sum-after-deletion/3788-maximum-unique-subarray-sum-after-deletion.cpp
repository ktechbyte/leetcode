class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> seen;
        int sum = 0;
        for (int num : nums) {
            if (num > 0 && seen.insert(num).second) {
                sum += num;
            }
        }
        if (seen.empty()) {
            return *max_element(nums.begin(), nums.end());
        }
        return sum;
    }
};