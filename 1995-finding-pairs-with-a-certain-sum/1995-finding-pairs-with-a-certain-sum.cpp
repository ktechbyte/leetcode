class FindSumPairs {
public:
    vector<int> n1, n2;
    unordered_map<int, int> map;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        n1 = nums1;
        n2 = nums2;
        for(int num : nums2) map[num]++;
    }
    
    void add(int index, int val) {
        map[n2[index]]--;
        n2[index] += val;
        map[n2[index]]++;
    }
    
    int count(int tot) {
        int result = 0;
        for(int num : n1){
            int ans = tot - num;
            if(map.count(ans)) result += map[ans];
        }
        return result;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */