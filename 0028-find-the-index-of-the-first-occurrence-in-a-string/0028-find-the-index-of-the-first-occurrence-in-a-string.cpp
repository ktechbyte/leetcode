class Solution {
public:
    int strStr(string haystack, string needle) {
        int s1=haystack.size();
        int s2=needle.size();
        bool flag = false;
        for(int i = 0; i<s1; i++){
            if(haystack[i]==needle[0]){
                int k = i+1;
                int j = 1;
                while(j<s2){
                    if(haystack[k]!=needle[j]) break;
                    k++;
                    j++;
                }
                if(j==s2) return i;
            }
        }
        return -1;
    }
};