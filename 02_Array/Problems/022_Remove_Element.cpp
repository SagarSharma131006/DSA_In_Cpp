// LeetCode #27 - Remove Element
// Difficulty: Easy
// Topic: Arrays
// Approach: Two Pointer + In-Place Modification
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
