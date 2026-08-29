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
