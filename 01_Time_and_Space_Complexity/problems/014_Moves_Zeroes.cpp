// LeetCode #283 - Move Zeroes
// Difficulty: Easy
// Topic: Time & Space Complexity
// Approach: Extra Array (Temporary Vector)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;

for(int x : nums) {
    if(x != 0)
        temp.push_back(x);
}

while(temp.size() < nums.size())
    temp.push_back(0);

nums = temp;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(n)
*/








//-----------------------------2nd Approach----------------------------------
// LeetCode #283 - Move Zeroes
// Difficulty: Easy
// Topic: Time & Space Complexity
// Approach: Two Pointer + In-Place Swap
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZero=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[i],nums[nonZero]);
                nonZero++;
            }
        }
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
