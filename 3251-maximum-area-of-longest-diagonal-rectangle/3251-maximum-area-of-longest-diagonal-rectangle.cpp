class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double maxDiag = DBL_MIN;
        int maxLen = INT_MIN, minLen = INT_MIN;
        int area;
        for(int i = 0; i<dimensions.size(); i++){
            int len = dimensions[i][0], wid = dimensions[i][1];
            double x = sqrt(pow(len, 2) + pow(wid, 2));
            if(x > maxDiag){
                maxDiag = x;
                area = len*wid;
            }
            if(x==maxDiag){
                if(len*wid > area){
                    maxDiag = x;
                    area = len*wid;
                }
            }
        }
        return area;
    }
};