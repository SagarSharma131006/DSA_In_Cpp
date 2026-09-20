// LeetCode #119 - Pascal's Triangle II
// Difficulty: Easy
// Topic: Arrays
// Approach: In-Place Row Construction
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex + 1, 1);

        for (int i = 1; i <= rowIndex; i++) {
            for (int j = i - 1; j > 0; j--) {
                row[j] = row[j] + row[j - 1];
            }
        }

        return row;
    }
};
/*
Time Complexity: O(rowIndex^2)
Space Complexity: O(rowIndex)
*/
