class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<bool> broken(26, false);
        for (char c : brokenLetters) {
            broken[c - 'a'] = true;
        }

        int count = 0;
        bool canType = true;

        for (int i = 0; i < text.size(); i++) {
            if (text[i] == ' ') {
                if (canType) count++;
                canType = true; // reset for next word
            } else {
                if (broken[text[i] - 'a']) {
                    canType = false;
                }
            }
        }

        // check last word
        if (canType) count++;

        return count;


        // set<char> st(brokenLetters.begin(), brokenLetters.end());
        // int i = 0;
        // int count = 0;
        // while (i < text.size()) {
        //     int j = i;
        //     string s = "";
        //     bool flag = true;
        //     while(j<text.size() && text[j] != ' '){
        //         s += text[j];
        //         j++;
        //     }
        //     for(int k = 0; k<s.size(); k++){
        //         if(st.find(s[k]) != st.end()){
        //             flag = false;
        //             break;
        //         }
        //     }
        //     if(flag){
        //         count++;
        //     }
        //     i = j + 1;
        // }
        // return count;
    }
};