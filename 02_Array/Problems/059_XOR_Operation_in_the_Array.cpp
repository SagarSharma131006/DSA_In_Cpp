// LeetCode #1486 - XOR Operation in an Array
// Difficulty: Easy
// Topic: Array / Bit Manipulation
// Approach: Iteration + XOR

class Solution {
public:
    int xorOperation(int n, int start) {
        int result = 0;

        for (int i = 0; i < n; i++) {
            result ^= (start + 2 * i);
        }

        return result;
    }
};

/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
