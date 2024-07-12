// 1717. Maximum Score From Removing Substrings


class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int totalPoints = 0;

        if (x > y) {
            totalPoints += removeSubstring(s, "ab", x);
            totalPoints += removeSubstring(s, "ba", y);
        } else {
            totalPoints += removeSubstring(s, "ba", y);
            totalPoints += removeSubstring(s, "ab", x);
        }

        return totalPoints;
    }

    int removeSubstring(string& inputString, string targetSubstring,
                        int pointsPerRemoval) {
        int totalPoints = 0;
        int writeIndex = 0;

        for (int readIndex = 0; readIndex < inputString.size(); readIndex++) {
            inputString[writeIndex++] = inputString[readIndex];
            if (writeIndex > 1 &&
                inputString[writeIndex - 2] == targetSubstring[0] &&
                inputString[writeIndex - 1] == targetSubstring[1]) {
                writeIndex -= 2;  // Move write index back to remove the match
                totalPoints += pointsPerRemoval;
            }
        }
        inputString.erase(inputString.begin() + writeIndex, inputString.end());

        return totalPoints;
    }
};