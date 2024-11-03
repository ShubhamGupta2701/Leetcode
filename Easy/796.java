class Solution {
    public boolean rotateString(String s, String goal) {
        // check if the size of both strings are equal or not if not then its not a variation of string s.
        if(s.length() != goal.length()) return false;
        
        // creating a new string with all possible combinations. 
        String check = s+s;

        //check if it contains goal or not and returing it.
        return check.contains(goal);
    }
}