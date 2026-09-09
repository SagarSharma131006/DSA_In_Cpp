// LeetCode #977 - Squares of a Sorted Array
// Difficulty: Easy
// Topic: Arrays
// Approach: Square + Sorting
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            int square = nums[i] * nums[i];
            ans.push_back(square);
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};
/*
Time Complexity: O(n log n)
Space Complexity: O(n)
*/





//------------2nd Approach--------------
// LeetCode #977 - Squares of a Sorted Array
// Difficulty: Easy
// Topic: Arrays
// Approach: Two Pointer
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int left = 0;
        int right = n - 1;

        for (int i = n - 1; i >= 0; i--) {
            if (abs(nums[left]) > abs(nums[right])) {
                ans[i] = nums[left] * nums[left];
                left++;
            }
            else {
                ans[i] = nums[right] * nums[right];
                right--;
            }
        }

        return ans;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(n)
*/
