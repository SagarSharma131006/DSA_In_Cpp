// LeetCode #1480 - Running Sum of 1d Array
// Difficulty: Easy
// Topic: Time & Space Complexity
// Approach: In-Place Prefix Sum
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            nums[i] += nums[i - 1];   // current element me pichle running sum ko add kar do
        }
        return nums;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1) auxiliary space
*/
