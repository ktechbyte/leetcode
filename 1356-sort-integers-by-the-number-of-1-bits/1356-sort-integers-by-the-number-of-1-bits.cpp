class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<vector<int>> count;
        // map<int, int> mp;
        for(int i = 0; i<arr.size(); i++){
            int x = arr[i];
            int c = 0;
            while(x){
                if(x&1) c++;
                x = x >> 1;
            }
            count.push_back({arr[i], c});
        }
        sort(count.begin(), count.end(), [](vector<int> &a, vector<int> &b){
            if(a[1] == b[1]) return a[0]<=b[0];
            else return a[1] < b[1];
        });
        for(int i = 0; i<count.size(); i++){
            arr[i] = count[i][0];
        } 
        return arr;
    }
};