// LeetCode #905 - Sort Array By Parity
// Difficulty: Easy
// Topic: Arrays
// Approach: Two Pass + Extra Array
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans;

        // First: store even elements
        for (int num : nums) {
            if (num % 2 == 0) {
                ans.push_back(num);
            }
        }

        // Second: store odd elements
        for (int num : nums) {
            if (num % 2 != 0) {
                ans.push_back(num);
            }
        }

        return ans;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(n)
*/







//--------------2nd Approach----------------
// LeetCode #905 - Sort Array By Parity
// Difficulty: Easy
// Topic: Arrays
// Approach: Two Pointer + In-Place Swap
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            if (nums[left] % 2 != 0 && nums[right] % 2 == 0) {
                swap(nums[left], nums[right]);
                left++;
                right--;
            }
            else {
                if (nums[left] % 2 == 0)
                    left++;

                if (nums[right] % 2 != 0)
                    right--;
            }
        }

        return nums;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1)
*/

