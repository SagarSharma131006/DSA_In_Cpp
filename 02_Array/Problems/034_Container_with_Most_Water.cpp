// LeetCode #11 - Container With Most Water
// Difficulty: Medium
// Topic: Arrays / Two Pointer
// Approach: Two Pointer
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxWater = 0;

        while (left < right) {
            int width = right - left;
            int h = min(height[left], height[right]);

            int area = width * h;
            maxWater = max(maxWater, area);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxWater;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
