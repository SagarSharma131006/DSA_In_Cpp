// LeetCode #704 - Binary Search
// Difficulty: Easy
// Topic: Arrays / Binary Search
// Approach: Iterative Binary Search
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                return mid;
            }

            if (target > nums[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return -1;
    }
};
/*
Time Complexity: O(log n)
Space Complexity: O(1)
*/
