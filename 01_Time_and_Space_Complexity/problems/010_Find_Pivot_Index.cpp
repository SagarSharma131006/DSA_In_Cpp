// LeetCode #724 - Find Pivot Index
// Difficulty: Easy
// Topic: Time & Space Complexity
// Approach: Total Sum + Running Left Sum
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        for (int num : nums) 
        totalSum += num;   // pehle poora array sum kar lo
        
        int leftSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            int rightSum = totalSum - leftSum - nums[i];  // total - left - current = right
            if (leftSum == rightSum) return i;
            leftSum += nums[i];   // agla index ke liye left sum update kar do
        }
        return -1;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
