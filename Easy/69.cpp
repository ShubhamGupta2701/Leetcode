// 69. Sqrt

class Solution {
public:
    int mySqrt(int x) {
        int Ans;
        if(x==0){
            return 0;
        }
        if(x==1||x==2||x==3){
            return 1;
        }
        if(x>3){
            for(long i=1;i<=x/2;i++){
                if(i*i>x){
                    Ans = i-1;
                    break;
                }else if(i*i==x){
                    Ans=i;
                    break;
                }else{}
            }
        }
        return Ans;
    }
};

