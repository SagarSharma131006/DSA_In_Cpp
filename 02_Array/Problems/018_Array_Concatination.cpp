// LeetCode #1929 - Concatenation of Array
// Difficulty: Easy
// Topic: Arrays
// Approach: Direct Indexing + Extra Array
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2 * n);

        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];
            ans[i + n] = nums[i];
        }

        return ans;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(n)
*/
