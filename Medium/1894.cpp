// 1894. Find the Student that Will Replace the Chalk 

class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
    long long total_chalk = 0;
    for(int ch : chalk) {
        total_chalk += ch;
    }
    
    k %= total_chalk;

    for(int i = 0; i < chalk.size(); i++) {
        if(chalk[i] > k) {
            return i;
        }
        k -= chalk[i];
    }
    
    return -1; 
}

};