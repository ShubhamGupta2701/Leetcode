// 13. Roman to Integer

class Solution {
public:
    int romanToInt(string s) {
        int size = s.length();
        int val = 0;
        if(size>15){
            return 0;
        }
        else{
            for(int i=0;i<size;i++){
                if(s[i] == 'I' && (s[i+1] != 'V' && s[i+1] != 'X')){
                    val += 1;
                }
                else if(s[i] == 'I' && s[i+1] == 'V'){
                    val += 4;
                    i++;
                }
                else if(s[i] == 'I' && s[i+1] == 'X'){
                    val += 9;
                    i++;
                }
                else if(s[i] == 'V'){
                    val += 5;
                }
                else if(s[i] == 'X' && (s[i+1] != 'L' && s[i+1] != 'C')){
                    val += 10;
                }
                else if(s[i] == 'X' && s[i+1] == 'L'){
                    val += 40;
                    i++;
                }
                else if(s[i] == 'X' && s[i+1] == 'C'){
                    val += 90;
                    i++;
                }
                else if(s[i] == 'L'){
                    val += 50;
                }
                else if(s[i] == 'C' && (s[i+1] != 'D' && s[i+1] != 'M')){
                    val += 100;
                }
                else if(s[i] == 'C' && s[i+1] == 'D'){
                    val += 400;
                    i++;
                }
                else if(s[i] == 'C' && s[i+1] == 'M'){
                    val += 900;
                    i++;
                }
                else if(s[i] == 'D'){
                    val += 500;
                }
                else if(s[i] == 'M'){
                    val += 1000;
                }
                else{
                    cout<<"Enter only valid characters...";
                }
            }
        }
        return val;
    }
};