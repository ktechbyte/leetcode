class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> updateArray(nums.size()+1, 0);
        vector<int> operations; // prefix sum array
        for(int i = 0; i<queries.size(); i++){
            int start = queries[i][0];
            int end = queries[i][1];
            updateArray[start] += 1;
            updateArray[end+1] -= 1;
        }
        int currentOperations = 0;
        for(int i = 0; i<updateArray.size(); i++){
            currentOperations += updateArray[i];
            operations.push_back(currentOperations);
        }
        for (int i = 0; i < nums.size(); i++) {
            if (operations[i] < nums[i]) return false;
        }
        return true;
    }
};