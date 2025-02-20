class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> a;
        int count = 0;
        for(int i = 0; i<stones.size(); i++){
            a[stones[i]]++;
        }
        for(int j = 0; j<jewels.size();j++){
            count += a[jewels[j]];
        }
        return count;
    }
};