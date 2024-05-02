
// 2441. Largest Positive Integer That Exists With Its Negative


int findMaxK(vector<int>& nums) {
    sort(nums.begin(), nums.end()); // Sort the array
    int i = 0, j = nums.size() - 1; // Initialize two pointers
    int ans = -1; // Default answer if no such k is found

    // Use two pointers to find the maximum k such that k and -k both exist
    while (i <= j) {
        if (nums[i] + nums[j] == 0) { // Check if the current pair is (k, -k)
            ans = max(ans, abs(nums[i])); // Update answer if a valid pair is found
            i++; // Move both pointers
            j--;
        } else if (nums[i] + nums[j] > 0) { // Sum too large, move the right pointer to decrease sum
            j--;
        } else { // Sum too small, move the left pointer to increase sum
            i++;
        }
    }
    return ans; // Return the found answer or -1 if no such k exists
}
