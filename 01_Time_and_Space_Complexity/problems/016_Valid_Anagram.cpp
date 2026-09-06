// LeetCode #242 - Valid Anagram
// Difficulty: Easy
// Topic: Time & Space Complexity
// Approach: Frequency Array
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        int freq[26] = {0};

        for (char ch : s) {
            freq[ch - 'a']++;
        }

        for (char ch : t) {
            freq[ch - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                return false;
            }
        }

        return true;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
