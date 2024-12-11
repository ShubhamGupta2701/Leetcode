class Solution {
    public int maximumBeauty(int[] nums, int k) {
        Arrays.sort(nums);
        int i = 0;
        int maxWidth = 0;
        for (int j = 0; j<nums.length; j++) {
            while (nums[j]-nums[i]>2*k) {
                i++;
            }
            maxWidth = Math.max(maxWidth,j-i+1);
        }
        return maxWidth;
    }
}