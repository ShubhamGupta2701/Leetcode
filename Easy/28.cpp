// 28. Find the Index of the First Occurrence in a String


class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int i = 0; i < haystack.length(); i++) {
            bool flag = false;
            if (haystack[i] == needle[0]) {
                for (int j = 0; j < needle.length(); j++) {
                    if (haystack[i + j] != needle[j]) {
                        flag = true;
                        break;
                    }
                }
                if (!flag) return i;
            }
        }
        return -1;
    }
};