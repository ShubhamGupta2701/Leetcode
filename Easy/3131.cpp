// 3131. Find the Integer Added to Array I

class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3 = nums1;
        vector<int> temp;
        int positivecount = 0, negetivecount = 0;
        sort(nums3.begin(),nums3.end());
        sort(nums2.begin(),nums2.end());
        int diff = abs(nums3[0] - nums2[0]);
        for(int i=0;i<nums1.size();i++){
            if(nums1[i] + diff == nums2[i]){
                temp.push_back(diff);
                positivecount++;
            }else{
                temp.push_back(nums2[i]-nums3[i]);
                negetivecount++;
            }
        }
        sort(temp.begin(),temp.end());
        if(positivecount > negetivecount){
            return temp[temp.size()-1];
        }else{
            return temp[0];
        }
    }
};