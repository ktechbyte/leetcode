class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0, min_price = INT_MAX, profit = 0;
        for(auto& price : prices){
            min_price = min(min_price, price);
            profit = price - min_price;
            max_profit = max(max_profit, profit);
        }
        return max_profit;
    }
};