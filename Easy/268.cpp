//268. Missing Number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int max = nums.size();
        int missingNumber;
        sort(nums.begin(),nums.end());

        for(int i =0;i<max;i++){
            if(i != nums[i]){
                missingNumber = i;
                break;
            }else{
                missingNumber = i+1;
            }
        }
        return missingNumber;
    }
};
