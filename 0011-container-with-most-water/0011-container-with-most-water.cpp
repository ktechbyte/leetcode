class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int current_max = 0, current_area = 0;

        while(left<right){
            int width = right-left;
            int h = min(height[left], height[right]);
            current_area = width*h;
            current_max = max(current_max, current_area);
            if(height[left]<height[right]) left++;
            else right--;
        }
        
        return current_max;
    }
};