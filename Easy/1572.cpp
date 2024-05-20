// 1572. Matrix Diagonal Sum

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int primary = 0,secondary = 0;
        for(int i=0;i<mat.size();i++){
            primary += mat[i][i];
            secondary += mat[i][mat.size()-1-i];
        }
        if(mat.size()%2!=0){
            int mid = mat.size()/2;
            secondary -= mat[mid][mid];
        }
        return primary+secondary;        
    }
};