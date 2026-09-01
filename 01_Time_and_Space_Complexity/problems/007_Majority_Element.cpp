// LeetCode #169 - Majority Element
// Difficulty: Easy
// Topic: Time & Space Complexity
// Approach: Hash Map
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        
        for (int num : nums) {
            mp[num]++;
            if (mp[num] > n/2)
            return num;   // early return jaise hi majority mil jaye
        }
        return -1; // yahan tak nahi aayega, problem guarantee karta hai majority exist karega
    }
};
/*
Time Complexity: O(n) average
Space Complexity: O(n)
*/
