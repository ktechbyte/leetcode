class Solution {
public:
    string sortVowels(string s) {
        vector<char> vow;
        set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        for(char x : s){
            if(vowels.find(x) != vowels.end()){
                vow.push_back(x);
            }
        }
        sort(vow.begin(), vow.end());
        int j = 0;
        for(int i = 0; i<s.size(); i++){
            if(vowels.find(s[i]) != vowels.end()){
                s[i] = vow[j];
                j++;
            }
        }
        return s;
    }
};