class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        bool ans = false;
        if(n != goal.length()) return false;
        for(int i=0;i<n;i++){
        int temp = s[n-1];
        for(int j=n-1;j>=0;j--){    
            if(j!=0){
                s[j] = s[j-1];
            }else{
                s[j] = temp;    
            }
            
            cout<<"Iteration of j "<<j<<" : "<<s<<endl;
        }
        if(s == goal){
            ans = true;
            break;
        }
        cout<<"Iteration "<<i+1<<" : "<<s<<endl;
        }
        return ans;
    }
};