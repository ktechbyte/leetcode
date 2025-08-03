class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return false;
        for (int p = 1; p < n - 2; p++) {
            // Check first segment: 0 to p (non-decreasing)
            bool flag1 = true;
            for (int i = 0; i < p; i++) {
                if (nums[i] >= nums[i + 1]) {
                    flag1 = false;
                    break;
                }
            }
            if (!flag1) continue;

            for (int q = p + 1; q < n - 1; q++) {
                // Check second segment: p to q (non-increasing)
                bool flag2 = true;
                for (int i = p; i < q; i++) {
                    if (nums[i] <= nums[i + 1]) {
                        flag2 = false;
                        break;
                    }
                }
                if (!flag2) continue;

                // Check third segment: q to n-1 (non-decreasing)
                bool flag3 = true;
                for (int i = q; i < n - 1; i++) {
                    if (nums[i] >= nums[i + 1]) {
                        flag3 = false;
                        break;
                    }
                }

                if (flag3) return true;
            }
        }
        return false;
    }
};