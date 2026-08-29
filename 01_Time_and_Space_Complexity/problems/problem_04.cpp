// LeetCode #1295 - Find Numbers with Even Number of Digits
// Difficulty: Easy
// Topic: Time & Space Complexity
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;

        for (string sentence : sentences) {
            int words = count(sentence.begin(), sentence.end(), ' ') + 1;
            maxWords = max(maxWords, words);
        }

        return maxWords;
    }
};
