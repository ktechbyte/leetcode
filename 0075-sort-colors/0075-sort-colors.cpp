class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> count(3,0);
        for(int i = 0; i<nums.size(); i++){
            count[nums[i]]++;
        }
        int k = 0, j=0;
        while(k<nums.size() && j<=2){
            for(int i = 0; i<count[j]; i++){
                nums[k] = j;
                k++;
            }
            j++;
        }
    }
};