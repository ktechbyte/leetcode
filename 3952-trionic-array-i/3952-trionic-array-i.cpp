class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return false;
        /*OPTIMISED APPROACH IN O(N)*/
        int i = 0;

        // strictly increasing
        while (i + 1 < n && nums[i] < nums[i + 1]) i++;
        if (i == 0 || i == n - 1) return false; // no peak or nothing left

        // strictly decreasing
        int peak = i;
        while (i + 1 < n && nums[i] > nums[i + 1]) i++;
        if (i == peak || i == n - 1) return false; // no valley or nothing left

        // strictly increasing again
        while (i + 1 < n && nums[i] < nums[i + 1]) i++;

        return i == n - 1;

        /*BRUTE FORCE APPROACH IN O(N^2)*/
        // for (int p = 1; p < n - 2; p++) {
        //     // Check first segment: 0 to p (non-decreasing)
        //     bool inc = true;
        //     for (int i = 0; i < p; i++) {
        //         if (nums[i] >= nums[i + 1]) {
        //             inc = false;
        //             break;
        //         }
        //     }
        //     if (!inc) continue;

        //     for (int q = p + 1; q < n - 1; q++) {
        //         // Check second segment: p to q (non-increasing)
        //         bool dec = true;
        //         for (int i = p; i < q; i++) {
        //             if (nums[i] <= nums[i + 1]) {
        //                 dec = false;
        //                 break;
        //             }
        //         }
        //         if (!dec) continue;

        //         // Check third segment: q to n-1 (non-decreasing)
        //         bool inc2 = true;
        //         for (int i = q; i < n - 1; i++) {
        //             if (nums[i] >= nums[i + 1]) {
        //                 inc2 = false;
        //                 break;
        //             }
        //         }

        //         if (inc2) return true;
        //     }
        // }
        // return false;
    }
};