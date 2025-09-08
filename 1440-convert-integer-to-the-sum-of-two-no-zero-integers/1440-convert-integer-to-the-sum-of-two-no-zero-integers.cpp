class Solution {
public:
    bool nonZero(int n){
        while(n>0){
            if(n%10==0) return false;
            n/=10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        int a, b;
        for(int i = 1; i<n; i++){
            a = i;
            b = n-i;
            if(nonZero(a) && nonZero(b)) return {a,b};
        }
        return {1,1};
    }
};