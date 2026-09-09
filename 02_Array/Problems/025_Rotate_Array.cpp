// LeetCode #189 - Rotate Array
// Difficulty: Medium
// Topic: Arrays
// Approach: Extra Array + Direct Indexing
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> temp(n);

        k = k % n;

        for (int i = 0; i < n; i++) {
            temp[(i + k) % n] = nums[i];
        }

        nums = temp;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(n)
*/





//-------------2nd Approach----------------
// LeetCode #189 - Rotate Array
// Difficulty: Medium
// Topic: Arrays
// Approach: Array Reversal
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        k = k % n;

        // Reverse the entire array
        reverse(nums.begin(), nums.end());

        // Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);

        // Reverse the remaining elements
        reverse(nums.begin() + k, nums.end());
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
