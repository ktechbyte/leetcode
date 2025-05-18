class Solution {
public:
    int mySqrt(int x) {
        if (x < 2)
            return x; // sqrt(0) = 0, sqrt(1) = 1

        int left = 1, right = x / 2, ans = 0; // using binary search concept

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // To avoid overflow, use long long for multiplication
            long long sq = (long long)mid * mid;

            if (sq == x) {
                return mid;
            } else if (sq < x) {
                ans = mid;      // mid is a possible answer
                left = mid + 1; // try for a larger value
            } else {
                right = mid - 1; // try for a smaller value
            }
        }

        return ans;
    }
};