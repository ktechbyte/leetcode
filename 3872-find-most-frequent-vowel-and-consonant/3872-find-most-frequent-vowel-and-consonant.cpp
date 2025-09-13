class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> chters(26, 0);
        for(char x : s){
            chters[x - 'a']++;
        }
        int vows = 0, conso = 0;
        for(int i = 0; i<26; i++){
            if(chters[i] == 0) continue;
            if(i == 0 || i == 4 || i == 8 || i == 14 || i == 20){
                vows = max(vows, chters[i]);
            } else{
                conso = max(conso, chters[i]);
            }
        }
        return vows + conso;
    }
};