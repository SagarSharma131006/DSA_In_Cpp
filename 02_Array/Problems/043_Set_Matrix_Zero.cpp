// LeetCode #73 - Set Matrix Zeroes
// Difficulty: Medium
// Topic: Arrays / Matrix
// Approach: In-Place Marking + Reverse Traversal
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        bool firstColHasZero = false;

        for (int i = 0; i < m; i++) {
            if (matrix[i][0] == 0)
                firstColHasZero = true;

            for (int j = 1; j < n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 1; j--) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }

            if (firstColHasZero)
                matrix[i][0] = 0;
        }
    }
};
/*
Time Complexity: O(m * n)
Space Complexity: O(1)
*/
