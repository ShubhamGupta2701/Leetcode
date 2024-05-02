// 27. Remove Element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        vector<int> temp;
        if(val>50||val<0){
            return size;
        }                      // Edge case
        for(int i=0;i<size;i++){
            if(nums[i]!=val){
                temp.push_back(nums[i]);        // filtering the elements which are not equall to val
                nums[i]=-1;
            }else{
                nums[i]=-1;
            }
        }
        int finalAns = temp.size();      // final answer is here 
        for(int i=0;i<size;i++){        // clearing the main vector
            nums.pop_back(); 
        }                            //after this loop our main vector is empty
        for(int i=0;i<finalAns;i++){    // push filter elements back to main vector
            nums.push_back(temp[i]);
        }
        return finalAns;      // return the final ans
    }
};
