// LeetCode #136 - Single Number
// Difficulty: Easy
// Topic: Time & Space Complexity
// Approach: XOR
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int ans = 0;

        for(int i=0;i<nums.size();i++)
        {
            ans = ans ^ nums[i];
        }

        return ans;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
