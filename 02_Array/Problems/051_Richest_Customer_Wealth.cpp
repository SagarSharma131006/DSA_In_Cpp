// LeetCode #1672 - Richest Customer Wealth
// Difficulty: Easy
// Topic: Arrays / Basic Traversal / Simulation
// Approach: Traverse each customer's accounts, calculate total wealth, and track maximum.
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;

        for (auto& customer : accounts) {
            int wealth = 0;

            for (int money : customer) {
                wealth += money;
            }

            maxWealth = max(maxWealth, wealth);
        }

        return maxWealth;
    }
};
/*
Time Complexity: O(m * n)
Space Complexity: O(1)
*/
