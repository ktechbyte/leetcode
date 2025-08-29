class Solution {
public:
    long long flowerGame(int n, int m) {
        /*OPTIMIZED O(1)*/
        long long oddN = (n + 1) / 2;
        long long evenN = n / 2;
        long long oddM = (m + 1) / 2;
        long long evenM = m / 2;
        
        return oddN * evenM + evenN * oddM;
        
        /*BRUTE FORCE O(n*m)*/
        // long long count = 0;
        // for(int i = 1; i<=n; i++){
        //     for(int j = 1; j<=m; j++){
        //         if(i!=j){
        //             if((i%2 == 0 && j%2 != 0) || (i%2 != 0 && j%2 == 0)){
        //                 count++;
        //             }
        //         }
        //     }
        // }
        // return count;
    }
};