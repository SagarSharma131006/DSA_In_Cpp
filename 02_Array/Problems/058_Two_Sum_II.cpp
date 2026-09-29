// LeetCode #167 - Two Sum II: Input Array Is Sorted
// Difficulty: Medium
// Topic: Arrays / Two Pointers
// Approach: Two Pointers - Opposite Direction
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];

            if (sum == target) {
                return {left + 1, right + 1};
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }

        return {};
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
