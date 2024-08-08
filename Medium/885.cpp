// 885. Spiral Matrix III


class Solution {
public:
    bool isValid(int i, int j, int n, int m) {
        return !(i < 0 || j < 0 || i >= n || j >= m);
    }

    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> res{{rStart, cStart}};
        int x = rStart, y = cStart, len = 1;
        
        while (res.size() < rows * cols) {

            for (int j = 1; j <= len; j++) {
                y++;
                if (isValid(x, y, rows, cols)) {
                    res.push_back({x, y});
                }
            }
            
            
            for (int j = 1; j <= len; j++) {
                x++;
                if (isValid(x, y, rows, cols)) {
                    res.push_back({x, y});
                }
            }
            
            len++;

            for (int j = 1; j <= len; j++) {
                y--;
                if (isValid(x, y, rows, cols)) {
                    res.push_back({x, y});
                }
            }
            
            for (int j = 1; j <= len; j++) {
                x--;
                if (isValid(x, y, rows, cols)) {
                    res.push_back({x, y});
                }
            }
            
            len++;
        }
        
        return res;
    }
};