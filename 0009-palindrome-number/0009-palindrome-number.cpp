class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        // int temp = x;
        // long reverse=0;
        // while(temp>0){
        //     reverse = reverse*10 + temp%10;
        //     temp /= 10;
        // }
        // if(reverse == x) return true;
        // return false;

        string y = to_string(x);
        int b = y.size()-1;
        int a = 0;
        while(a<=b){
            if(y[a]!=y[b]) return false;
            a++;
            b--;
        }
        return true;
    }
};