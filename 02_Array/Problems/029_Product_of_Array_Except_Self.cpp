// LeetCode #238 - Product of Array Except Self
// Difficulty: Medium
// Topic: Arrays
// Approach: Prefix Product + Suffix Product
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> answer(n, 1);

        // Prefix product
        int prefix = 1;

        for (int i = 0; i < n; i++) {
            answer[i] = prefix;
            prefix *= nums[i];
        }

        // Suffix product
        int suffix = 1;

        for (int i = n - 1; i >= 0; i--) {
            answer[i] *= suffix;
            suffix *= nums[i];
        }

        return answer;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1) auxiliary space
*/
