// LeetCode #1572 - Matrix Diagonal Sum
// Difficulty: Easy
// Topic: Arrays / Basic Traversal / Simulation
// Approach: Traverse each row and add both diagonal elements
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;

        for (int i = 0; i < n; i++) {

            // Primary diagonal
            sum += mat[i][i];

            // Secondary diagonal
            sum += mat[i][n - 1 - i];

            // Avoid counting center twice
            if (i == n - 1 - i) {
                sum -= mat[i][i];
            }
        }

        return sum;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
