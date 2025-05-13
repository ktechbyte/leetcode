class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        const int MOD = 1e9 + 7;
        vector<int> prev(26, 1);  // Base case: at t = 0, each character becomes itself

        while(t--) {
            vector<int> curr(26, 0);
            for (int c = 0; c < 26; ++c) {
                if (c == 25) { // z
                    curr[c] = (prev[0] + prev[1]) % MOD;
                } else {
                    curr[c] = prev[c + 1];
                }
            }
            prev = curr;
        }

        long long result = 0;
        for (char ch : s) {
            result = (result + prev[ch - 'a']) % MOD;
        }

        return result;
    }
};


// Memory Limit Exceeded
// class Solution {
// public:
//     int lengthAfterTransformations(string s, int t) {
//         long mod = 10E9 + 7;
//         while (t--) {
//             for (int i = 0; i < s.size(); i++) {
//                 if (s[i] != 'z') {
//                     s[i] = char(s[i] + 1);
//                 } else if (s[i] == 'z') {
//                     string store1 = s.substr(0, i);
//                     string store2 = s.substr(i + 1, s.size() - i - 1);
//                     s = store1 + "ab" + store2;
//                 }
//             }
//         }
//         return s.size() % mod;
//     }
// };