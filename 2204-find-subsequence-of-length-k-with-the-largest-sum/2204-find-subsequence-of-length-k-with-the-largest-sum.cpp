class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int, int>> numbers;
        for(int i = 0; i<nums.size(); i++){
            numbers.emplace_back(i, nums[i]);
        }
        sort(numbers.begin(), numbers.end(), [&](auto x1, auto x2){return x1.second > x2.second;});
        sort(numbers.begin(), numbers.begin() + k);
        vector<int> ans;
        for(int i = 0; i<k; i++){
            ans.push_back(numbers[i].second);
        }
        return ans;
    }
};