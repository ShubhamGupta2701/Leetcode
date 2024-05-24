// 392. Is Subsequence


class Solution {
public:
    bool isSubsequence(string s, string t) {
        int front=0,back = 0;
        while(front < s.length() && back < t.length()){
            if(s[front] == t[back]){
                front++;
            }
            back++;
        }
        return front == s.length();
    }
};