class Solution {
public:
    bool hasSameDigits(string s) {  
        int size = s.size();
        vector<int> sum;   
        for(int i = 0; i<size; i++){
            sum.push_back(s[i] - '0');
        }
        size--;
        while(size>1){
            for(int i = 0; i<size; i++){
                sum[i] = (sum[i] + sum[i+1])%10;
            }
            size--;
        }
        return sum[0] == sum[1];
    }
};