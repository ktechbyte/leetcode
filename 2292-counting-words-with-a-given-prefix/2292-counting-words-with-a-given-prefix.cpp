class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for(string s : words){
            if(s[0]==pref[0]){
                int i = 1;
                while(i<pref.size()){
                    if(s[i] != pref[i]) break;
                    i++;
                }
                if(i==pref.size()){
                    count++;
                }
            }
        }
        return count;
    }
};