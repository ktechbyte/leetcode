class Solution {
public:
    int modulo = 1e9 + 7;
    int powerModulo(long long a, long long b){
        if(b == 0) return 1; 
        long long half = powerModulo(a, b/2);
        long long ans = (half * half)  % modulo;
        if(b % 2 == 1) ans  = (ans * a) % modulo; // if power is odd
        return ans; 
    }
    int countGoodNumbers(long long n) {
    //Digits at even indices (0-based) must be even digits → {0, 2, 4, 6, 8} → 5 options
    //Digits at odd indices can only be prime digits → {2, 3, 5, 7} → 4 options
        return (long long)powerModulo(5, (n+1)/2) * powerModulo(4, n/2)  % modulo; 
        // So the total number of valid "good numbers" is:
        // (5^((\U0001d45b+1)/2) × 4^(\U0001d45b/2)) % (10^9+7)
    }
};