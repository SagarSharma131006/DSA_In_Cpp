// LeetCode #118 - Pascal's Triangle
// Difficulty: Easy
// Topic: Arrays
// Approach: Previous Row + Dynamic Construction
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;

        for (int row = 0; row < numRows; row++) {
            vector<int> currentRow(row + 1, 1);

            for (int col = 1; col < row; col++) {
                currentRow[col] =
                    triangle[row - 1][col - 1] +
                    triangle[row - 1][col];
            }

            triangle.push_back(currentRow);
        }

        return triangle;
    }
};
/*
Time Complexity: O(numRows^2)
Space Complexity: O(numRows^2) for output
*/
