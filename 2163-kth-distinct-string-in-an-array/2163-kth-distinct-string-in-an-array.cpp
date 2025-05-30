class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp;
        for (const string& s : arr) {
            mp[s]++;
        }

        for (const string& s : arr) {
            if (mp[s] == 1) {
                k--;
                if (k == 0)
                    return s;
            }
        }

        return "";
    }
};