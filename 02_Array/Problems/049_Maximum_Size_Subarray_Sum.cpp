// LeetCode #209 - Minimum Size Subarray Sum
// Difficulty: Medium
// Topic: Arrays
// Approach: Brute-Force(TLE{Time Limit Exceed})
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int minLen = INT_MAX;
        
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += nums[j];
                if (sum >= target) {
                    minLen = min(minLen, j - i + 1);
                    break;   // is starting point se aage badhane ka fayda nahi, length hi badhegi
                }
            }
        }
        
        return (minLen == INT_MAX) ? 0 : minLen;
    }
};
/*
Time Complexity: O(n²)
Space Complexity: O(1)
*/



// LeetCode #209 - Minimum Size Subarray Sum
// Difficulty: Medium
// Topic: Arrays / Sliding Window
// Approach: Variable-Size Sliding Window
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0, sum = 0, minLen = INT_MAX;

        for (int right = 0; right < n; right++) {
            sum += nums[right];

            while (sum >= target) {
                minLen = min(minLen, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }

        return (minLen == INT_MAX) ? 0 : minLen;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1)
*/



// LeetCode #209 - Minimum Size Subarray Sum
// Difficulty: Medium
// Topic: Arrays
// Approach: Binary Search + Prefix Sum
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixSum(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }
        int minLen = INT_MAX;
        for (int i = 0; i <= n; i++) {
            int toFind = prefixSum[i] + target;
            auto it = lower_bound(prefixSum.begin(), prefixSum.end(), toFind);
            if (it != prefixSum.end()) {
                int j = it - prefixSum.begin();
                minLen = min(minLen, j - i);
            }
        }        
        return (minLen == INT_MAX) ? 0 : minLen;
    }
};
/*
Time: O(n log n)
Space: O(n)
*/
