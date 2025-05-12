class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        long num = 0;
        set<int> ans;
        sort(digits.begin(), digits.end());
        for(int i = 0; i<digits.size(); i++){
            if(digits[i]==0) continue;
            num = num*10 + digits[i];
            for(int j = 0; j<digits.size(); j++){
                if(j==i) continue;
                num = num*10 + digits[j];
                for(int k = 0; k<digits.size(); k++){
                    if(k==i || k==j) continue;
                    if(digits[k]%2==0) {
                        num = num*10 + digits[k];
                        ans.insert(num);
                        num = num/10;
                    }
                }
                num = num/10;
            }
            num = 0;
        }
        return vector<int>(ans.begin(), ans.end());
    }
};