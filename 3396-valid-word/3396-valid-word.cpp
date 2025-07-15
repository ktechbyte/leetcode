class Solution {
public:
    bool isValid(string word) {
        if (word.size() < 3) return false;
        
        set<char> vowel = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
        bool hasVowel = false, hasConsonant = false;
        for (int i = 0; i < word.size(); i++) {
            if(!isalnum(word[i])) return false;
            
            if(isalpha(word[i])){
                if(vowel.count(word[i])) hasVowel = true;
                else hasConsonant = true;
            }
        }
        return hasVowel && hasConsonant;
    }
};
