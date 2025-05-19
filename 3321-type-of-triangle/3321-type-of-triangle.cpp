class Solution {
public:
    string triangleType(vector<int>& nums) {
        // int s1 = nums[0] + nums[1], s2 = nums[1] + nums[2], s3 = nums[2] + nums[0];
        // if(s1<=nums[2] || s2<=nums[0] || s3<=nums[1]) return "none";
        // if(nums[0] == nums[1] && nums[1] == nums[2] && nums[0] == nums[2]) return "equilateral";
        // else if (nums[0] != nums[1] && nums[1] != nums[2] && nums[0] != nums[2]) return "scalene";
        // return "isosceles";
        sort(nums.begin(), nums.end());
        if(nums[0] + nums[1] <= nums[2]) return "none";
        else if(nums[0] == nums[2]) return "equilateral";
        else if(nums[0] == nums[1] || nums[1] == nums[2]) return "isosceles";
        return "scalene";
    }
};