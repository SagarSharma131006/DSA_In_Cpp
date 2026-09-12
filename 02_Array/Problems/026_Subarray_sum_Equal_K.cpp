// LeetCode #560 - Subarray Sum Equals K
// Difficulty: Medium
// Topic: Arrays
// Approach: Brute Force + Prefix Sum from Each Start
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            int sum = 0;

            for (int j = i; j < n; j++) {
                sum += nums[j];

                if (sum == k) {
                    count++;
                }
            }
        }

        return count;
    }
};
/*
Time Complexity: O(n²)
Space Complexity: O(1)
*/







//--------------------2nd Approach--------------------
// LeetCode #560 - Subarray Sum Equals K
// Difficulty: Medium
// Topic: Arrays
// Approach: Prefix Sum + Hash Map
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;

        int sum = 0;
        int count = 0;

        for (int num : nums) {
            sum += num;

            if (mp.count(sum - k)) {
                count += mp[sum - k];
            }

            mp[sum]++;
        }

        return count;
    }
};
/*
Time Complexity: O(n) average
Space Complexity: O(n)
*/

