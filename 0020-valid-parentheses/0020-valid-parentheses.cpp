class Solution {
public:
    bool isValid(string s) {
        int si = s.size();
        stack<char>st;
        for(int i = 0; i<si; i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(s[i]);
            else {
                if (st.empty()) return false;
                if ((s[i] == ')' && st.top() == '(') || 
                    (s[i] == '}' && st.top() == '{') || 
                    (s[i] == ']' && st.top() == '[')) {
                    st.pop();
                } 
                else {
                    return false;
                }
            }
        }
        return st.empty(); 
    }
};