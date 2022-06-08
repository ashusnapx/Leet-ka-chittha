class Solution
{
    public:
        int checkPalindrome(string s)
        {
            int i = 0;
            int j = s.length();
            for (; i < (j / 2); i++)
            {
                if (s[i] != s[j - 1 - i])
                {
                    return 1;
                }
            }

            return 0;
        }
    int removePalindromeSub(string s)
    {
        if(s.length()==1)
        {
            return 1;
        }
        int ans = checkPalindrome(s);
        if (ans == 0)
        {
            return 1;
        }
        return 2;
    }
};