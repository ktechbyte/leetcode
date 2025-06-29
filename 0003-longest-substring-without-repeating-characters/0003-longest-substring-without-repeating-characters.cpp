class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // O(N^2) approach
        // int maxLen = 0;
        // for(int i = 0; i<s.size(); i++){
        //     vector<int> hash(256, 0);
        //     for(int j = i; j<s.size(); j++){
        //         if(hash[s[j]] == 1) break;
        //         hash[s[j]] = 1;
        //         int len = j - i + 1;
        //         maxLen = max(maxLen, len);
        //     }
        // }
        // return maxLen;

        // O(N) approach
        int maxLen = 0;
        int l = 0, r = 0;
        vector<int> hash(256, -1);
        while(r<s.size()){   
                if(hash[s[r]] != -1) l = max(hash[s[r]] + 1, l);
                int len = r - l + 1;
                maxLen = max(maxLen, len);
                hash[s[r]] = r;
                r++;
        }
        return maxLen;
    }
};