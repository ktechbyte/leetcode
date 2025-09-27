class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double area = 0.0;
        int n = points.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                for(int k = j + 1; k < n; k++){
                    double x1 = points[i][0], x2 = points[j][0], x3 = points[k][0];
                    double y1 = points[i][1], y2 = points[j][1], y3 = points[k][1];
                    area = max(area, 0.5*abs((x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2))));
                }
            }
        }
        return area;
    }
};