class Solution {
    // public boolean isPalindrome(String s){
    //     int i =0;
    //     int n = s.length()-1;
    //     while(i<=n){
    //         if(s.charAt(i) != s.charAt(n)) return false;
    //         i++;
    //         n--;
    //     }
    //     return true;
    // }

    public String longestPalindrome(String s) {
        int n = s.length();
        int maxLen = 0;
        String ans = "";
        
        // odd palindrome string
        for(int mid = 0;mid<n;mid++){
            int i = mid-1;
            int j = mid+1;
            int curLen = 1;
            while(i>=0 && j<n && s.charAt(i) == s.charAt(j)){
                i--;
                j++;
                curLen += 2;
            }
            if(curLen > maxLen){
                ans = s.substring(i+1,j);
                maxLen = curLen;
            }
        }

        // even palindrome string
        for(int mid = 0; mid < n ; mid++){
            int i = mid;
            int j = mid+1;
            int curLen = 0;
            while(i>=0 && j<n && s.charAt(i) == s.charAt(j)){
                i--;
                j++;
                curLen += 2;
            }
            if(curLen > maxLen){
                ans = s.substring(i+1,j);
                maxLen = curLen;
            }
        }



        
        return ans;

        // int n = s.length();
        // String longestSubString = "";
        // for(int i=0;i<n;i++){
        //     String str = "";
        //     for(int j=i;j<n;j++){
        //         str += (s.charAt(j) + "");
        //         if(isPalindrome(str) && str.length() > longestSubString.length()){
        //             longestSubString = str;
        //         }
        //     }
        // }
        // return longestSubString;
    }
}