class Solution {
public:
    void reverseArr(vector<int>& nums, int l, int r) {
        while (l < r) {
            swap(nums[l], nums[r]);
            l++;
            r--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        /* most optimal inplace O(n) The standard way is using reversal algorithm*/
        int n = nums.size();
        k %= n; // handle k > n   
        reverseArr(nums, 0, n - 1); //Reverse the whole array
        reverseArr(nums, 0, k - 1); //Reverse the first k elements
        reverseArr(nums, k, n - 1); //Reverse the remaining n - k elements

        /* inplace solution using swappings O(n*k) gives TLE for large k */
        // int n = nums.size();
        // int mod = k % n;
        // int idx = 0;
        // for(int i = n - mod; i<n; i++){
        //     int curr = nums[i];
        //     for(int j = i - 1; j>=idx; j--){
        //         nums[j+1] = nums[j];
        //     }
        //     nums[idx] = curr;
        //     idx++;
        // }

        /* outplace solution O(n)*/
        // vector<int> nums2 = nums;
        // int n = nums.size();
        // for(int i = 0; i<n;i++){
        //     nums[(i+k) % n] = nums2[i];
        // }
    }
};