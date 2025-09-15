class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        set<char> st(brokenLetters.begin(), brokenLetters.end());
        int i = 0;
        int count = 0;
        while (i < text.size()) {
            int j = i;
            string s = "";
            bool flag = true;
            while(j<text.size() && text[j] != ' '){
                s += text[j];
                j++;
            }
            for(int k = 0; k<s.size(); k++){
                if(st.find(s[k]) != st.end()){
                    flag = false;
                    break;
                }
            }
            if(flag){
                count++;
            }
            i = j + 1;
        }
        return count;
    }
};