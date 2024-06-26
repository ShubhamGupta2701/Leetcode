// 1502. Can Make Arithmetic Progression From Sequence

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int diff = arr[1] - arr[0];
        for(int i=arr.size()-1;i>1;i--){
            if(arr[i] - arr[i-1] != diff) return false;
        }
        return true;
    }
};