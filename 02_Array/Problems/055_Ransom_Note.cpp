// LeetCode #383 - Ransom Note
// Difficulty: Easy
// Topic: Arrays / Hashing / Frequency
// Approach: Store character frequencies of ransomNote and magazine using HashMaps
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> ransom;
        unordered_map<char, int> maga;

        for (char ch : ransomNote)
            ransom[ch]++;

        for (char ch : magazine)
            maga[ch]++;

        for (char ch : ransomNote) {
            if (ransom[ch] > maga[ch])
                return false;
        }

        return true;
    }
};
/*
Time Complexity: O(n + m)
Space Complexity: O(1)
*/



//------------2nd Approach---------------
// LeetCode #383 - Ransom Note
// Difficulty: Easy
// Topic: Arrays / Frequency Array
// Approach: Use a fixed-size frequency array of 26 lowercase English letters
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26] = {0};

        // Count characters available in magazine
        for (char ch : magazine) {
            freq[ch - 'a']++;
        }

        // Use characters required by ransomNote
        for (char ch : ransomNote) {
            freq[ch - 'a']--;

            if (freq[ch - 'a'] < 0) {
                return false;
            }
        }

        return true;
    }
};
/*
Time Complexity: O(n + m)
Space Complexity: O(1)
*/
