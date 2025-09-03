class Solution {
public:
    bool hasDuplicate(const string& s) {
        unordered_set<char> seen;
        for (char c : s) {
            if (seen.count(c))
                return true; // already seen
            seen.insert(c);
        }
        return false;
    }

    int maxLength(vector<string>& arr) {
        vector<string> dp = {""}; // store valid concatenated strings
        int ans = 0;

        for (string &s : arr) {
            // skip if s has duplicate chars inside itself
            if (hasDuplicate(s)) continue;

            vector<string> newList;
            for (string &curr : dp) {
                string combined = curr + s;
                if (!hasDuplicate(combined)) {
                    newList.push_back(combined);
                    ans = max(ans, (int)combined.size());
                }
            }
            dp.insert(dp.end(), newList.begin(), newList.end());
        }

        return ans;
    }
};