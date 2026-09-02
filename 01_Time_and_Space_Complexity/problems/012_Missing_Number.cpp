// LeetCode #268 - Missing Number
// Difficulty: Easy
// Topic: Time & Space Complexity
// Approach: XOR
class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int n=nums.size();
      int result=n;
      for(int i=0;i<n;i++)
      {
        result ^= i;
        result ^= nums[i];
      }
      return result;  
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
