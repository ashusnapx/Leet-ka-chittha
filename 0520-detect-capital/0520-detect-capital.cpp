class Solution
{
    public:
        bool detectCapitalUse(string word)
        {
            int count_cap = 0;

           	// loop to count the number of capital letters in string
            for (int i = 0; i < word.length(); i++)
            {
                if (word[i] >= 'A' && word[i] <= 'Z')
                {
                    count_cap++;
                }
            }
           	// conditions to check if the result can be true
            if (word[0] >= 'A' && word[0] <= 'Z' && count_cap == 1) return true;
            if (count_cap == word.length()) return true;
            if (count_cap == 0) return true;

            return false;
        }
};