class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1.length() != s2.length())
            return false;

        vector<int> diffIndices;

        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] != s2[i]) {
                diffIndices.push_back(i);
            }
        }

        if (diffIndices.size() == 0) {
            return true;
        } else if (diffIndices.size() == 2) {
            int i = diffIndices[0];
            int j = diffIndices[1];
            return s1[i] == s2[j] && s1[j] == s2[i];
        } else {
            return false;
        }
    }
};