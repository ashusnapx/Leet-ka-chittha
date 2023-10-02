class Solution
{
    public:
        bool winnerOfGame(string s)
        {
            int countA = 0, countB = 0;
            int n = s.size();

            for (int i = 1; i < n - 1; i++)
            {
                if (s[i - 1] == s[i] && s[i] == s[i + 1])
                {
                    if (s[i] == 'A') countA++;
                    else countB++;
                }
            }

            return countA > countB;
        }
};