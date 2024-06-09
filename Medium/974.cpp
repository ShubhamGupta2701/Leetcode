// 974. Subarray Sum Divisible by K

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int  ans=0;
        for(auto &x:nums){
            if(x<0){
                x=-x;
                x=k-(x%k);
            }
        }
        unordered_map<int,int> mpp;
        int x=0;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++){
            x+=nums[i];
            ans+=mpp[x%k];
            mpp[x%k]++;
        }
        return ans;
        
    }
};