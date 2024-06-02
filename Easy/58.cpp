// 58. Length of Last word

class Solution {
public:
    int lengthOfLastWord(string s) {
        bool flag = true;
        int count = 0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i] != ' '){
                count++;
                flag = true;
            }
            else if(flag == false){
                break;
            }
        }


        return count;
    }
};  