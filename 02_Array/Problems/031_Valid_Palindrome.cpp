// LeetCode #125 - Valid Palindrome
// Difficulty: Easy
// Topic: Arrays / Two Pointer
// Approach: Two Pointer with Character Filtering
class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0;
        int e = s.size() - 1;

        while (st < e) {

            while (st < e && !isalnum(s[st]))
                st++;

            while (st < e && !isalnum(s[e]))
                e--;

            if (tolower(s[st]) != tolower(s[e]))
                return false;

            st++;
            e--;
        }

        return true;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
