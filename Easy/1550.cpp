// 1550. Three consicutive Numbers

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int maxSize = arr.size();
        for(int i=0;i<=maxSize-3;i++){
            if(arr[i]%2!=0 && arr[i+1]%2!=0 && arr[i+2]%2!=0){
                return true;
            }
        }
        return false;
    }
};