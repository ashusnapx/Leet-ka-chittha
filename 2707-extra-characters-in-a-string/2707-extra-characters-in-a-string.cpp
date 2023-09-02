class Solution {
public:
    int minExtraChar(string target, vector<string>& dictionary) {
        int targetLength = target.length();
        vector<int> dp(targetLength + 1);
        dp[0] = 0;
        for (int i = 0; i < targetLength; i++) {
            dp[i + 1] = 1 + dp[i];
            for (string word : dictionary) {
                int wordLength = word.length();
                if (i >= wordLength - 1 && word == target.substr(i - wordLength + 1, wordLength)) {
                    dp[i + 1] = min(dp[i + 1], dp[i - wordLength + 1]);
                }
            }
        }
        return dp[targetLength];
    }
};
