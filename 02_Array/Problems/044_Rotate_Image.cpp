// LeetCode #48 - Rotate Image
// Difficulty: Medium
// Topic: Arrays / Matrix
// Approach: Transpose + Reverse
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // Step 1: Transpose
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Step 2: Reverse every row
        for (int i = 0; i < n; ++i) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
/*
Time Complexity: O(n^2)
Space Complexity: O(1)
*/
