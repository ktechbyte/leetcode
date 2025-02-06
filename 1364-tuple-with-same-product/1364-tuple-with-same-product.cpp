class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int> ump;
        int count = 0;
        for(int i = 0; i<nums.size()-1; i++){
            for(int j = i+1; j<nums.size(); j++){
                ump[nums[i]*nums[j]]++;
            }
        }
        for(auto x: ump){
            if(x.second>1){
                count = count + 4*x.second*(x.second-1);
            }
        }
        return count;
    }
};