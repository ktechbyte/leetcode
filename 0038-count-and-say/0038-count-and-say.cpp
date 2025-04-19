class Solution {
public:
    string helper(int n, string str){
        if(n<=1) return str;
        string s="";
        for(int i = 0; i<str.size(); i++){
            int count = 1;
            char digit = str[i];
            while(i+1<str.size() && str[i] == str[i+1]){
                count++;
                i++;
            }
            s += to_string(count);
            s += digit;
        }
        return helper(n-1, s);
    }


    string countAndSay(int n) {
        // Method 1 iterative
        // if(n==1) return "1";    
        // string ans = "1";

        // for(int i = 1; i<n; i++){
        //     int count = 1;
        //     string s;
        //     char digit = ans[0];
        //     for(int j = 1; j<ans.size(); j++){
        //         if(ans[j]==digit) count++;
        //         else{
        //             s += to_string(count) + digit;
        //             digit = ans[j];
        //             count = 1;
        //         }
        //     }
        //     s += to_string(count) + digit;
        //     ans = s;
        // }
        // return ans;

        // method 2 recursive
        return helper(n, "1");
    }
};