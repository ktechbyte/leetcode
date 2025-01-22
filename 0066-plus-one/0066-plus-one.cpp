class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // Traverse from the last digit
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits; // Return as no further changes are needed
            }
            digits[i] = 0; // Set current digit to 0
        }

        // If all digits are 9, we need an extra digit
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
