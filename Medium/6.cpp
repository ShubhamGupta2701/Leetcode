// 6. Zigzag Conversion

class Solution {
public:
    string convert(string s, int numRows) {
        int method = 0;
        string ans = "";
        vector<string> V;
        if(numRows == 1) {
            return s;
        }
        for(int i=0;i<numRows;i++) {
            V.push_back("");
        }
        int index = 0;
        for(int i=0;i<s.size();i++) {
            V[index] += s[i];
            if(method==0) {
                if(index==(numRows-1)) {
                    method = 1;
                    index--;
                } else {
                    index++;
                }
            } else {
                if(index==0) {
                    method = 0;
                    index++;
                } else {
                    index--;
                }
            }
        }
        for(int i=0;i<V.size();i++) {
            ans += V[i];
        }
        return ans;
    }
};