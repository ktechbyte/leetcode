class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int ops = 0;

        while (!is_sorted(nums.begin(), nums.end())) {
            int minSum = INT_MAX;
            int minIndex = -1;

            for (int i = 0; i < nums.size() - 1; ++i) {
                int pairSum = nums[i] + nums[i + 1];
                if (pairSum < minSum) {
                    minSum = pairSum;
                    minIndex = i;
                }
            }

            vector<int> newNums;
            for (int i = 0; i < nums.size(); ++i) {
                if (i == minIndex) {
                    newNums.push_back(nums[i] + nums[i + 1]);
                    ++i;
                } else {
                    newNums.push_back(nums[i]);
                }
            }

            nums = newNums;
            ++ops;
        }

        return ops;
    }
};