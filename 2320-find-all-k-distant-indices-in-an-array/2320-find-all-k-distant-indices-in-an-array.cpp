class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int> ans;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == key){
                ans.insert(i);
                for(int j = i-1; j>=0 && abs(i-j)<=k; j--){
                    ans.insert(j);
                }
                for(int j = i+1; j<nums.size() && abs(i-j)<=k; j++){
                    ans.insert(j);
                }
            }
        }
        return vector<int>(ans.begin(), ans.end());
    }
};