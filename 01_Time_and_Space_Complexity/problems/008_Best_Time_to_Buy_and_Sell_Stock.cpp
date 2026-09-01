// LeetCode #121 - Best Time to Buy and Sell Stock
// Difficulty: Easy
// Topic: Time & Space Complexity
// Approach: Single Pass
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        
        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price;              // ab tak ka sabse sasta din
            } else if (price - minPrice > maxProfit) {
                maxProfit = price - minPrice;  // aaj bech de to kitna profit milega
            }
        }
        return maxProfit;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
