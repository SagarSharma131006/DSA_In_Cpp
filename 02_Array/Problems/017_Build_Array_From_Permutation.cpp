// LeetCode #1920 - Build Array from Permutation
// Difficulty: Easy
// Topic: Arrays
// Approach: Direct Indexing + Extra Array
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            ans[i] = nums[nums[i]];
        }

        return ans;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(n)
*/





//--------------2nd Approach---------------
// LeetCode #1920 - Build Array from Permutation
// Difficulty: Easy
// Topic: Arrays
// Approach: In-Place Encoding
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();

        // Step 1: Encode old value + new value
        for (int i = 0; i < n; i++) {
            nums[i] += n * (nums[nums[i]] % n);
        }

        // Step 2: Extract the new value
        for (int i = 0; i < n; i++) {
            nums[i] /= n;
        }

        return nums;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
