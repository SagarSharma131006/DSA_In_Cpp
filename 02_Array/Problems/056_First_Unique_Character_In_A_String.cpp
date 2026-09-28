// LeetCode #387 - First Unique Character in a String
// Difficulty: Easy
// Topic: Arrays / Frequency Array
// Approach: Count character frequencies, then find the first character with frequency 1.
class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {0};

        // Pass 1: Count frequency of every character
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        // Pass 2: Find the first unique character
        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
