// 624. Maximum Distance in Arrays


class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int ans = 0;
        int MIN = arrays[0][0];
        int MAX = arrays[0][arrays[0].size() - 1];

        for (int i = 1; i < arrays.size(); i++) {
            int n = arrays[i].size();
            ans = max(ans, max(abs(MAX - arrays[i][0]), abs(arrays[i][n - 1] - MIN)));
            MAX = max(MAX, arrays[i][n - 1]);
            MIN = min(MIN, arrays[i][0]);
        }
        return ans;
    }
};