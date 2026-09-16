// LeetCode #128 - Longest Consecutive Sequence
// Difficulty: Medium
// Topic: Arrays / Hashing
// Approach: Hash Set
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;

        for (int num : numSet) {

            // Sequence ka first element
            if (numSet.find(num - 1) == numSet.end()) {

                int currentNum = num;
                int count = 1;

                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};
/*
Time Complexity: O(n) average
Space Complexity: O(n)
*/
