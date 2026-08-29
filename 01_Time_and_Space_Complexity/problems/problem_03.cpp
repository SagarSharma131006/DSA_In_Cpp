// LeetCode #1295 - Find Numbers with Even Number of Digits
// Difficulty: Easy
// Topic: Time & Space Complexity
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;

        for (int num : nums) {
            if ((num >= 10 && num <= 99) ||
                (num >= 1000 && num <= 9999) ||
                num == 100000) {
                count++;
            }
        }

        return count;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
