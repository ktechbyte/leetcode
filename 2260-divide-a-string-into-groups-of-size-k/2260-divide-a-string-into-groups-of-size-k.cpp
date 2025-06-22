class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        int n = s.size();
        int a = n/k;
        string temp;
        for(int i = 0; i<a; i++){
            ans.push_back(s.substr(i*k, k));
        }
        if(n%k!=0){
            int rem = n%k;
            string temp = "";
            temp = s.substr(s.size()-rem);
            int c = k - rem;
            while(c--) temp += fill;
            ans.push_back(temp);
        }
        return ans;
        
    }
};