class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans(n);
        int half = n/2;
        for(int i = 0; i<n; i++){
            if(n%2 == 0){
                if(i<n/2){
                    ans[i] = half-n+i;
                }
                else
                    ans[i] = half + i - n + 1;
            }
            else{
                ans[i] = half + i - n + 1;
            }
        }
        return ans;
    }
};