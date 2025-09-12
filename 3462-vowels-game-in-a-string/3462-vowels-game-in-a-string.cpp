class Solution {
public:
    bool doesAliceWin(string s) {
        set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        for(char x : s){
            if(vowels.find(x) != vowels.end()){
                return true;
            }
        }
        return false;
    }
};