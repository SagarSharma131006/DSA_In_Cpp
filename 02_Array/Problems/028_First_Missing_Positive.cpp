// LeetCode #41 - First Missing Positive
// Difficulty: Hard
// Topic: Arrays
// Approach: Brute Force + Linear Search
// TLE- Time Limit Exceed - Maar Gya.......
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        for (int candidate = 1; candidate <= n + 1; candidate++) {
            bool found = false;

            for (int num : nums) {
                if (num == candidate) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                return candidate;
            }
        }

        return 1;
    }
};
/*
Time Complexity: O(n²)
Space Complexity: O(1)
*/





//----------------2nd Approach----------------
// LeetCode #41 - First Missing Positive
// Difficulty: Hard
// Topic: Arrays
// Approach: Cyclic Sort / In-Place Placement
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            while (nums[i] > 0 &&
                   nums[i] <= n &&
                   nums[nums[i] - 1] != nums[i]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }

        return n + 1;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1)
*/






//------------------------3rd Approach----------------------
// LeetCode #41 - First Missing Positive
// Difficulty: Hard
// Topic: Arrays
// Approach: Negative Marking / In-Place Hashing
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] <= 0 || nums[i] > n) {
                nums[i] = n + 1;
            }
        }

        for (int i = 0; i < n; i++) {
            int val = abs(nums[i]);
            int idx = val - 1;

            if (idx >= 0 && idx < n) {
                if (nums[idx] > 0) {
                    nums[idx] = -nums[idx];
                }
            }
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                return i + 1;
            }
        }

        return n + 1;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
