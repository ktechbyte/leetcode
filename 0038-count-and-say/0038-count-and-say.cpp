class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";    
        string ans = "1";

        for(int i = 1; i<n; i++){
            int count = 1;
            string s;
            char digit = ans[0];
            for(int j = 1; j<ans.size(); j++){
                if(ans[j]==digit) count++;
                else{
                    s += to_string(count) + digit;
                    digit = ans[j];
                    count = 1;
                }
            }
            s += to_string(count) + digit;
            ans = s;
        }
        return ans;
    }
};