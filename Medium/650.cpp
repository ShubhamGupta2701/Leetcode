// 650. 2 Keys Keyboard



int minSteps(int n) {
        vector<int> primeFactors;
        int cnt=0;
        int d = 2;
        while (n>1){
            while (n%d==0) {
                cnt+=d;
                n/=d;
            }
            d++;
            if (d*d>n) break;
        }
        if (n!=1) cnt+=n;
        return cnt;
    }