// 2597. The Number of Beautiful Subsets



class Solution {
public:
    static int beautifulSubsets(vector<int>& nums, const int k) {
        const int n = nums.size();
        sort(nums.begin(), nums.end());
        const int M = nums.back();
        const int q = (M + k) / k; 
        

        char freq[k][q+1];
        memset(freq, 0, sizeof(freq));
        
        for (auto x : nums) {
            auto [i, r] = div(x, k);
            freq[r][i]++;
        }
        
        int ans = 1;
        for (int r = 0; r < k; r++) {
            int prev = 1, curr = 1;
            for (int i = 0; i < q; i++) {
                int take = (1 << freq[r][i]) - 1;
                if (i > 0) take *= prev;
                else take *= curr;
                prev = curr;
                curr = curr + take;
            }
            ans *= curr;
        }

        
        return ans-1;
    }
};
