class Solution {
public:
    string reverseWords(string s) {
        // using stack (using O(n) extra space)
        //      stack<string> st;
        //      int n = s.size();

        //     for (int i = 0; i < n;) {
        //         if (s[i] != ' ') {
        //             int j = i;
        //             while (j < n && s[j] != ' ') {
        //                 j++;
        //             }
        //             st.push(s.substr(i, j - i));
        //             i = j;
        //         } else {
        //             i++;
        //         }
        //     }

        //     string ans;
        //     while (!st.empty()) {
        //         ans.append(st.top());
        //         st.pop();
        //         if (!st.empty()) {
        //             ans += ' ';
        //         }
        //     }

        //     return ans;
        // }

        string st;
        string ans;
        int n = s.size();

        for (int i = 0; i < n;) {
            if (s[i] != ' ') {
                int j = i;
                while (j < n && s[j] != ' ') {
                    j++;
                }
                st = s.substr(i, j - i);
                ans = st + (ans.empty() ? "" : " ") + ans;
                i = j;
            } else {
                i++;
            }
        }
        return ans;
    }
};