class Solution {
    public boolean isCircularSentence(String sentence) {
        int size = sentence.length();
        for(int i=0; i<size-1; i++){
            if(sentence.charAt(i) == ' '){
                if(sentence.charAt(i-1) != sentence.charAt(i+1)) return false;
            }
        }
        if(sentence.charAt(0) != sentence.charAt(size-1)) return false;
        return true;
    }
}