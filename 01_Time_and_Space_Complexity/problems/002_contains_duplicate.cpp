// LeetCode #217 - Contains Duplicate
// Difficulty: Easy
// Topic: Time & Space Complexity
// Approach: Hash Map (unordered_map)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (int x : nums) {
            if (mp[x]++)
                return true;
        }

        return false;
    }
};
/*
Time Complexity: O(n) average
Space Complexity: O(n)
*/
