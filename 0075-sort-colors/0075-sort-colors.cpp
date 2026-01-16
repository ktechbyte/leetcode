class Solution {
public:
    void sortColors(vector<int>& nums) {
        // O(2N) time brute force approach
        // int zeroes = 0, ones = 0, twos = 0;
        // for(int i = 0; i<nums.size(); i++){
        //     if(nums[i] == 0) zeroes++;
        //     else if(nums[i] == 1) ones++;
        //     else twos++; 
        // }
        // int i = 0;
        // while(zeroes--){
        //     nums[i] = 0;
        //     i++;
        // }
        // while(ones--){
        //     nums[i] = 1;
        //     i++;
        // }
        // while(twos--){
        //     nums[i] = 2;
        //     i++;
        // }

        // O(N) time and with some constant extra space better approach
        // vector<int> count(3,0);
        // for(int i = 0; i<nums.size(); i++){
        //     count[nums[i]]++;
        // }
        // int k = 0, j=0;
        // while(k<nums.size() && j<=2){
        //     for(int i = 0; i<count[j]; i++){
        //         nums[k] = j;
        //         k++;
        //     }
        //     j++;
        // }

        // O(N) optimal approach Dutch National flag algorithm inplace algo
        int low = 0, mid = 0, high = nums.size()-1;
        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } 
            else if(nums[mid] == 1){
                mid++;
            } 
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};