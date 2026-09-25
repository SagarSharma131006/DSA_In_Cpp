// LeetCode #1534 - Count Good Triplets
// Difficulty: Easy
// Topic: Arrays / Basic Traversal / Simulation
// Approach: Brute Force using three nested loops
class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n = arr.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                if (abs(arr[i] - arr[j]) > a)
                    continue;

                for (int k = j + 1; k < n; k++) {
                    if (abs(arr[j] - arr[k]) <= b &&
                        abs(arr[i] - arr[k]) <= c) {
                        count++;
                    }
                }
            }
        }

        return count;
    }
};
/*
Time Complexity: O(n^3)
Space Complexity: O(1)
*/
