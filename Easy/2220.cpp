// 2220. Minimum Bit Flips to Convert Number 


class Solution {
public:
    int getBit(int n, int pos){
        if(n&(1<<(pos-1))){
            return 1;
        }
        return 0;
    }
    int minBitFlips(int start, int goal) {
        int count=0;
        for(int i=1; i<32; i++){
            if(getBit(start, i)^getBit(goal, i)){
                count++;
            }
        }
        return count;
    }
};