class Solution {
public:
    bool isPalindrome(string s) {
        int st=0;
        int en=s.size()-1;

        while(st<en){
            if(s[st]>='a'&& s[st]<='z'){
                s[st]=s[st]-'a'+'A';
            }
            if(s[en]>='a'&& s[en]<='z'){
                s[en]=s[en]-'a'+'A';
            }
            if(s[st]<'0'|| s[st]>'9'){
                if(s[st]<'A'|| s[st]>'Z'){
                    st++;
                    continue;
                }  
            }
            if(s[en]<'0'|| s[en]>'9'){
                if(s[en]<'A'|| s[en]>'Z'){
                    en--;
                    continue;
                }  
            }
            if(s[st]!=s[en]){
                return false;
            }
            st++;en--;
        }
        return true;
    }
};