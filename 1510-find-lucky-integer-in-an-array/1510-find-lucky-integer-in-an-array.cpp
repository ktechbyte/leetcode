class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> um;
        int ans = -1;
        for(int i = 0; i<arr.size(); i++){
            um[arr[i]]++;
        }
        for(auto x : um){
            if(x.first == x.second){
                ans = max(ans, x.first);
            }
        }
        return ans;
    }
};