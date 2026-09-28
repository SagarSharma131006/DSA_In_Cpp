// LeetCode #1365 - How Many Numbers Are Smaller Than the Current Number
// Difficulty: Easy
// Topic: Arrays / Frequency Array
// Approach: Frequency Array + Prefix Sum
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int freq[101] = {0};

        // Step 1: Count frequency of every number
        for (int num : nums) {
            freq[num]++;
        }

        // Step 2: Prefix sum
        // freq[i] = number of elements <= i
        for (int i = 1; i <= 100; i++) {
            freq[i] += freq[i - 1];
        }

        // Step 3: Find how many numbers are smaller
        vector<int> result;

        for (int num : nums) {
            if (num == 0) {
                result.push_back(0);
            } else {
                result.push_back(freq[num - 1]);
            }
        }

        return result;
    }
};
/*
Time Complexity: O(n + k)
Space Complexity: O(k)
where k = 101 because nums[i] is in the range [0, 100].
*/
