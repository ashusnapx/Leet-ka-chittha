class Solution
{
    public:
        int n;
    string s;

    int palindrome_length(int i, int j)
    {
        int best = -1;
        while (i >= 0 && j < n && s[i--] == s[j++])
            best = j - i - 1;

        return best;
    }

    string longestPalindrome(string s_)
    {
        n = s_.size();
        s = s_;
        int ans = 0, start = 0;

        for (int i = 0; i < n; i++)
        {
            int odd_palin = palindrome_length(i, i);
            int even_palin = palindrome_length(i, i + 1);
            int longest_palin = max(odd_palin, even_palin);

            int even_start = i - (longest_palin / 2) + 1;
            int odd_start = i - (longest_palin - 1) / 2;

            if (longest_palin > ans)
            {
                ans = longest_palin;
                start = even_palin == longest_palin ? even_start : odd_start;
            }
        }

        return s.substr(start, ans);
    }
};