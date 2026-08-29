// LeetCode #1 - Two Sum
// Difficulty: Easy
// Topic: Time & Space Complexity
// Approach: Hash Map
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }

        return {-1, -1};
    }
};
/*
Time Complexity: O(n) average
Space Complexity: O(n)
*/
