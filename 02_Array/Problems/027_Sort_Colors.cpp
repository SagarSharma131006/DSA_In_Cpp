// LeetCode #75 - Sort Colors
// Difficulty: Medium
// Topic: Arrays
// Approach: Bubble Sort
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }
    }
};
/*
Time Complexity: O(n²)
Space Complexity: O(1)
*/






//-----------------2nd Approach----------------
// LeetCode #75 - Sort Colors
// Difficulty: Medium
// Topic: Arrays
// Approach: Dutch National Flag / Three Pointer
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while (mid <= high) {

            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
