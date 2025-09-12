class Solution {
public:
    bool doesAliceWin(string s) {
        set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int count = 0;
        for(char x : s){
            if(vowels.find(x) != vowels.end()){
                count++;
            }
        }
        if(count==0) return false;
        if(count%2!=0) return true;
        else{
            return true;
        }
    }
};