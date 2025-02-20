class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char, int> a;
        unordered_map<char, int> b;
        for(auto c: t) a[c]++;
        for(auto x: s) b[x]++;
        return a==b;
    }
};