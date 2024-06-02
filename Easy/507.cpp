// 507. Perfect Number 

class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        int temp = num;
        for (int i =1;i<num;i++){
            if(temp%i == 0){
                sum += i;
            }
        }
        if(num == sum){
            return true;
        }
        return false;
    }
};