class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int b5 = 0, b10 = 0, b20 = 0;
        for(int i = 0; i<bills.size(); i++){
            if(bills[i]==5){
                b5++;
            }
            else if(bills[i]==10){
                if(b5==0) return false;
                b5--;
                b10++;
            }
            else if(bills[i]==20){
                if(b5==0 || (b10==0 && b5<3)) return false;
                if(b10==0){
                    b5-=3;
                }
                else{
                    b5--;
                    b10--;
                }
                b20++;
            }
        }
        return true;
    }
};