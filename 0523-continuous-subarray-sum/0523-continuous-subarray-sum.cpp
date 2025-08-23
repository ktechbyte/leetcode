class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> seen;
        seen[0] = -1;
        int sum = 0;

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            // track remainders of prefix sums and check if the same remainder occurs at two different indices at least 2 indices apart
            int rem = sum % k;
            if(seen.count(rem)) {
                if(i - seen[rem] > 1) return true;
            } else {
                seen[rem] = i;
            }
        }
        return false;


        /* 87/102 test cases passed. This logic fails when n>2 && nums[0] == 0 as nums[0]%k == 0 */
        // int n = nums.size();
        // vector<int> prefix(n);
        // prefix[0] = nums[0];
        // int countZeroes = 0;
        // for(int i = 1; i<n; i++){
        //     prefix[i] = prefix[i-1] + nums[i];
        //     if(nums[i]==0 && nums[i-1]==0) countZeroes++;
        // }

        // if(countZeroes>=2) return true;

        // for(int x : prefix){
        //     if(x%k == 0 && n>=2) return true;
        // }
        // return false;
    }
};