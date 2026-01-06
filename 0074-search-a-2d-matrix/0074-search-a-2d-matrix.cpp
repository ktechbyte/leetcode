class Solution {
public:
    bool binarySearch(vector<int> &mat, int target){
        int left = 0, right = mat.size()-1;
        while(left<=right){
            int mid = (left+right)/2;
            if(mat[mid] == target) return true;
            else if(mat[mid] < target) left = mid+1;
            else right = mid - 1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // Brute force O(N^2)
        /*
        int n = matrix.size(); // rows
        int m = matrix[0].size(); //cols

        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(matrix[i][j] == target)
                    return true;
            }
        }
        return false;
        */

        // Better Approach - Binary Search accross rows O(N + logM)
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i = 0; i<n; i++){
            if(matrix[i][0] <= target && target <= matrix[i][m-1])
                return binarySearch(matrix[i], target);
        }
        return false;
    }
};