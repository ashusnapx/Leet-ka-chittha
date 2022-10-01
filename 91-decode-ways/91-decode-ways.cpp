class Solution
{
    public:
        int numDecodings(string s)
        {
            int n = s.size();
            if (n == 0) return 0;
            int prev2, prev, cur;
            prev = 1;
            for (int ind = n - 1; ind >= 0; ind--)
            {
                int res;
                if (s[ind] == '0')
                {
                    cur = 0;
                }
                else
                {
                    res = prev;
                    if (ind < n - 1 and(s[ind] == '1'
                            or(s[ind] == '2'
                                and s[ind + 1] - '0'<7)))
                        res += prev2;

                    cur = res;
                }
                prev2 = prev;
                prev = cur;
            }
            return prev;
        }
};