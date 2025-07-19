class StockSpanner {
public:
    stack<pair<int, int>> st;
    int i = 0;
    StockSpanner() {
        
    }
    
    int next(int price) {
        i++;
        while(!st.empty() && st.top().first <= price) st.pop();
        int span;
        if(st.empty()) span = i;
        else span = i-(st.top().second);
        st.push({price, i});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */