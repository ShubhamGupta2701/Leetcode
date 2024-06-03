// 2486. Append Characters to String to Make Subsequence

class Solution {
public:
    int appendCharacters(string s, string t) {
        int s_pt = 0,t_pt = 0, s_max = s.length(), t_max = t.length();
        while(s_pt < s_max && t_pt < t_max){
            if(s[s_pt] == t[t_pt]){
                t_pt++;
            }
            s_pt++;
        }
        return t_max - t_pt;
    }
};