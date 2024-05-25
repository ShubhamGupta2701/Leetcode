// 414. Third Maximum Number



class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int distCount = 0;
        for(int i=0;i<nums.size();i++){
            if(i==0||nums[i] != nums[i-1]){
                distCount++;
                if(distCount == 3){
                    return nums[i];
                }
            }
        }
        return nums[0];
    }
};