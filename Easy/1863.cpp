// 1863. Sum of All Subset XOR Totals


class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        return dfs(nums, 0, 0);
    }
private:
    int dfs(vector<int>& nums, int index, int currentXor) {
        if (index == nums.size()) {
            return currentXor;
        }
        int include = dfs(nums, index + 1, currentXor ^ nums[index]);
        int exclude = dfs(nums, index + 1, currentXor);
        return include + exclude;
    }
};