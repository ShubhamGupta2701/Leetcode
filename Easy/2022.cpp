// 2022. Convert 1D Array Into 2D Array 


class Solution {
public:
    static vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int ind=0;
        int sz = original.size();
        vector<vector<int>> ans;
        if(m*n!=sz) return ans;
        for(int i=0;i<m;i++){
            vector<int> t;
            for(int i=0;i<n;i++){
                t.push_back(original[ind]);
                ind++;
            }
            ans.push_back(t);
        }
        return ans;
    }
};