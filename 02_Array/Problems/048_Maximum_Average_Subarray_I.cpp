// LeetCode #643 - Maximum Average Subarray I
// Difficulty: Easy
// Topic: Arrays / Sliding Window
// Approach: Fixed-Size Sliding Window
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int windowSum = 0;

        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
        }

        int maxSum = windowSum;

        for (int i = k; i < nums.size(); i++) {
            windowSum += nums[i] - nums[i - k];
            maxSum = max(maxSum, windowSum);
        }

        return (double)maxSum / k;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
