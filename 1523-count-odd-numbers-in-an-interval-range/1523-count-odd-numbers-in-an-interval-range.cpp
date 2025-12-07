class Solution {
public:
    int countOdds(int low, int high) {
        // ---- METHOD - 1 --------
        // int count = 0;
        // for(int i = low; i<=high; i++){
        //     if(i%2!=0) count++;
        // }
        // return count;
        
        // ---- METHOD - 2 --------
        // if(low%2!=0 && high%2!=0){
        //     return (high-low)/2 + 1;
        // } else if((low%2!=0 && high%2==0) || (low%2==0 && high%2!=0)){
        //     return (high+1 - low)/2;
        // } else{
        //     return (high - low)/2;
        // }

        // ---- METHOD - 3 --------
        int n = (high - low + 1);
        if(n%2==0) return n/2;
        if(low%2!=0 || high%2!=0) return n/2 + 1;
        return n/2;
    }
};