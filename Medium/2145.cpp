class Solution {
    public:
        int numberOfArrays(vector<int>& differences, int lower, int upper) {
            long sum = 0, high = 0, low = 0;
            for( int i : differences){
                sum += i;
                high = max(high,sum);
                low = min(low,sum);
            }
            return max(0L, upper-lower-high+low+1);
        }
    };