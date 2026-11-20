// LeetCode #2011 - Final Value of Variable After Performing Operations
// Difficulty: Easy
// Topic: Array / Simulation
// Approach: Single Pass + Conditional Update

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;

        for (const string& op : operations) {
            if (op[1] == '+') {
                x++;
            } else {
                x--;
            }
        }

        return x;
    }
};

/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
