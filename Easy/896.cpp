// 896. Monotonic Array

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> temp = nums;
        vector<int> temp1 = nums;
        sort(temp.begin(),temp.end());
        sort(temp1.begin(),temp1.end(),greater<int>());
        
        if(nums == temp || nums == temp1) return true;
        return false;
    }
};