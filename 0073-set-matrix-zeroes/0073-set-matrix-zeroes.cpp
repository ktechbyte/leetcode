class Solution {
public:
    void matRow(vector<vector<int>>& matrix, int n, int m, int i) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] != 0)
                matrix[i][j] = -20;
        }
    }
    void matCol(vector<vector<int>>& matrix, int n, int m, int j) {
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] != 0)
                matrix[i][j] = -20;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    matRow(matrix, n, m, i);
                    matCol(matrix, n, m, j);
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if(matrix[i][j]==-20){
                    matrix[i][j]=0;
                }
            }
        }
    }
};