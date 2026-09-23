// LeetCode #1299 - Replace Elements with Greatest Element on Right Side
// Difficulty: Easy
// Topic: Arrays / Basic Traversal / Simulation
// Approach: Traverse from right to left while maintaining the maximum element on the right.
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxRight = -1;

        for (int i = n - 1; i >= 0; i--) {
            int currentVal = arr[i];

            arr[i] = maxRight;

            maxRight = max(maxRight, currentVal);
        }

        return arr;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
