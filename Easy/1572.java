class Solution {
    public int diagonalSum(int[][] mat) {
        int r = mat.length; // calculate length
        int c = r; // calculate columns -> bcs its a square matrix
        int ans = 0; // total sum

        // primary
        for(int i=0;i<r;i++){
            ans += mat[i][i]; 
        }

        //secondary
        for(int i=0;i<r;i++){
            if(i==(c-i-1)){ 
                ans+=0;
            }else{
                ans+=mat[i][c-i-1];
            }        
        }
        return ans;
    }
}
