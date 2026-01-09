class Solution {
public:
    int lowerBound(vector<int>& nums, int target){
        int ans = -1;
        int low = 0, high = nums.size()-1;

        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] == target){
                ans = mid;
                high = mid - 1;
            }
            else if(nums[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return ans;
    }
    int upperBound(vector<int>& nums, int target){
        int ans = -1;
        int low = 0, high = nums.size()-1;

        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] == target){
                ans = mid;
                low = mid + 1;
            }
            else if(nums[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int lower = lowerBound(nums, target);
        int higher = upperBound(nums, target);
        return {lower, higher};
    }
};