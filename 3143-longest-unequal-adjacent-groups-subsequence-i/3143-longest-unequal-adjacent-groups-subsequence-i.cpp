class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        if (words.size() == 1) return words;
        vector<string> ans;
        ans.push_back(words[0]);
        for (int i = 1; i < groups.size(); i++)
            if (groups[i] != groups[i - 1]) ans.push_back(words[i]);
        return ans;
    }
};