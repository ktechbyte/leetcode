class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // bruteforce (O(n^2))
        // for(int i = 0; i<nums.size(); i++){
        //     for(int j = i+1; j<nums.size(); j++){
        //         if(nums[i]+nums[j] == target){
        //             return {i, j};
        //         }
        //     }
        // }
        // return {-1,-1};


        //optimal solution (using 2 pointer O(nlogn))
        //works only if the given array is also sorted as it will change the   
        //indexes of the values 
        // sort(nums.begin(), nums.end());
        // int i = 0;
        // int j = nums.size()-1;
        // int currentSum = 0;
        // while(i<j){
        //     currentSum = nums[i] + nums[j];
        //     if(currentSum == target) return {i,j};
        //     else if(currentSum<target) i++;
        //     else j--;
        // }
        // return {-1,-1};


        // best optimized solution using hashmap (O(n))
        unordered_map<int, int> um;
        int required;
        for(int i = 0; i<nums.size(); i++){
            required = target-nums[i];
            if(um.find(required) != um.end()) return {um[required], i};
            um[nums[i]] = i;
        }
        return {-1,-1};
    }
};