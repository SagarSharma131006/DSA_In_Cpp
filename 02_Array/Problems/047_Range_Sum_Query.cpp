// LeetCode #303 - Range Sum Query - Immutable
// Difficulty: Easy
// Topic: Arrays / Prefix Sum
// Approach: Prefix Sum
class NumArray {
public:
    vector<int> prefixSum;

    NumArray(vector<int>& nums) {
        int n = nums.size();
        prefixSum.resize(n + 1, 0);

        for (int i = 0; i < n; i++) {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }
    }

    int sumRange(int left, int right) {
        return prefixSum[right + 1] - prefixSum[left];
    }
};
/*
Time Complexity: O(n) preprocessing
Each Query: O(1)
Space Complexity: O(n)
*/
