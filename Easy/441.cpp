// 441. Arranging Coins 

class Solution {
public:
    int arrangeCoins(int n) {
        int i=1;
        while(true){
            n-=i;
            i++;
            if(n<i){
                break;
            }
        }
        return i-1;
    }
};